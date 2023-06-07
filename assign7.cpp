#include <iostream>
using namespace std;
void bfs(int arr[6][6], int n)
{
    int vis[n];
    int que[2 * n];
    int fr = 0, re = 0;
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
    }
    que[re] = 0;
    vis[0] = 1;
    re++;
    while (fr != re)
    {
        int node = que[fr];
        fr++;
        cout << node + 1 << " ";
        for (int i = 0; i < n; i++)
        {
            if (arr[node][i] == 1 and vis[i] == 0)
            {
                que[re] = i;
                re++;
                vis[i] = 1;
            }
        }
    }
    cout << endl;
}
void dfs(int gr[6][6], int n)
{
    int vis[n];
    int st[2 * n];
    int top = 0;
    for (int i = 0; i < n; i++)
    {
        vis[i] = 0;
    }
    st[top] = 0;
    while (top != -1)
    {
        int node = st[top];
        top--;
        if (vis[node] == 0)
        {
            cout << node + 1 << " ";
            vis[node] = 1;
            for (int i = 0; i < n; i++)
            {
                if (gr[node][i] == 1)
                {
                    top++;
                    st[top] = i;
                }
            }
        }
    }
    cout << endl;
}
int main()
{
    int gr[6][6] = {
        {0, 1, 0, 1, 0, 0},
        {1, 0, 0, 0, 1, 1},
        {0, 0, 0, 1, 1, 1},
        {1, 0, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0},
        {0, 1, 1, 0, 0, 0}};
    int ch;
    do
    {
        /* code */
        cout << "the graph is: " << endl;
        cout << "\t";
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "\t";
        }
        cout << endl;
        for (int i = 0; i < 6; i++)
        {
            cout << i + 1 << "\t";
            for (int j = 0; j < 6; j++)
            {
                cout << gr[i][j] << "\t";
            }
            cout << endl;
        }

        cout << "--------MENU--------" << endl;
        cout << "1.BFS Traversal of Graph" << endl;
        cout << "2,DFS Traversal of Graph" << endl;
        cout << "Enter your choice";
        cin >> ch;
        cout << endl;
        switch (ch)
        {
        case 1:
            cout << "BFS Traversal of Graph is: ";
            bfs(gr, 6);
            break;
        case 2:
            cout << "DFS Traversal of Graph is: ";
            dfs(gr, 6);
            break;
        }
    } while (ch == 1 or ch == 2);
    cout << "-----Thank You-----" << endl;
    return 0;
}
// OUTPUT : the graph is : 1 2 3 4 5 6 1 0 1 0 1 0 0 2 1 0 0 0 1 1 3 0 0 0 1 1 1 4 1 0 1 0 0 0 5 0 1 1 0 0 0 6 0 1 1 0 0 0 -- -- -- --MENU-- -- -- --1.BFS Traversal of Graph 2.DFS Traversal of Graph
//              Enter your choice1
//                  BFS Traversal of Graph is : 1 2 4 5 6 3 2 the graph is : 1 2 3 4 5 6 1 0 1 0 1 0 0 2 1 0 0 0 1 1 3 0 0 0 1 1 1 4 1 0 1 0 0 0 5 0 1 1 0 0 0 6 0 1 1 0 0 0 -- -- -- --MENU-- -- -- --1.BFS Traversal of Graph 2.DFS Traversal of Graph
//                      Enter your choice2
//                          DFS Traversal of Graph is : 1 4 3 6 2 5 the graph is : 1 2 3 4 5 6 1 0 1 0 1 0 0 2 1 0 0 0 1 1 3 0 0 0 1 1 1 4 1 0 1 0 0 0 5 0 1 1 0 0 0 6 0 1 1 0 0 0 -- -- -- --MENU-- -- -- --1.BFS Traversal of Graph 2,
//          DFS Traversal of Graph
//              Enter your choice0-- -- -Thank You-- -- -