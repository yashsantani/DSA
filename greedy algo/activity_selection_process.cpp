#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        int start, end;
        cin >> start >> end;
        a.push_back({end, start});
    }
    sort(a.begin(), a.end());
    int take = 1;
    int end = a[0][0];
    for (int i = 0; i < n; i++)
    {

        if (a[i][1] >= end)
        {
            take++;
            end = a[i][0];
        }
    }
    cout << take;
}