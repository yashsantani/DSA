#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> adjm(n + 1, vector<int>(n + 1, 0));
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;
    }
    cout << "adjacency matrix is" << endl;
    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            cout << adjm[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl
         << endl;

    cin >> n >> m;
    vector<int> arr[100];
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        arr[x].push_back(y);
        arr[y].push_back(x);
    }
    vector<int>::iterator it;
    for (int i = 1; i < n; i++)
    {
        cout << i << "->";
        for (it = arr[i].begin(); it != arr[i].end(); it++)
        {
            cout << *it;
        }
        cout << endl;
    }
}