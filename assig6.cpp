#include <iostream>
using namespace std;
int main()
{
    int n;
    string city[20];
    int adj_matrix[50][50];
    cout << "Enter the no. of cities : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the name of city " << i + 1 << ": ";
        cin >> city[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            cout << "Enter the time required to travel from city " << city[i] << " to the " << city[j] << "" << endl;
            cin >> adj_matrix[i][j];
            adj_matrix[j][i] = adj_matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\t" << city[i] << "\t";
    }
    for (int i = 0; i < n; i++)
    {
        cout << "\n"<< city[i];
        for (int j = 0; j < n; j++)
        {
            cout << "\t" << adj_matrix[i][j] << "\t";
        }
    }
}
// Output : Enter the no.of cities : 4 Enter the name of city 1 : Pune
                                                                //    Enter the name of city 2 : Vashi
                                                                                                //   Enter the name of city 3 : Nerul
                                                                                                                                //  Enter the name of city 4 : Turbhe
                                                                                                                                                                // Enter the time required to travel from city Pune to the Vashi 30 Enter the time required to travel from city Pune to the Nerul 40 Enter the time required to travel from city Pune to the Turbhe 560 Enter the time required to travel from city Vashi to the Nerul 40 Enter the time required to travel from city Vashi to the Turbhe 31 Enter the time required to travel from city Nerul to the Turbhe 16 Pune Vashi Nerul Turbhe
                                                                                                                                                                    // Pune 0 30 40 560 Vashi 30 0 40 31 Nerul 40 40 0 16 Turbhe560 31 16 0