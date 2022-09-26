#include <bits/stdc++.h>
using namespace std;
int rob_houses(vector<int> v, int n, vector<int> &dp)
{
    if (n == 0)
    {
        return v[0];
    }
    if (n < 0)
    {
        return 0;
    }
    if (dp[n] != -1)
    {
        return dp[n];
    }
    int sel, non_sel;

    sel = v[n] + rob_houses(v, n - 2, dp);
    non_sel = rob_houses(v, n - 1, dp);

    return dp[n] = max(sel, non_sel);
}
int main()
{
    int n;
    cin >> n;
    vector<int> v, dp1(n, -1), dp2(n, -1);
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    vector<int> temp1, temp2;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            temp1.push_back(v[i]);
            continue;
        }
        if (i == (v.size() - 1))
        {
            temp2.push_back(v[i]);
            continue;
        }
        temp1.push_back(v[i]);
        temp2.push_back(v[i]);
    }
    cout << (max(rob_houses(temp1, n - 1, dp1), rob_houses(temp2, n - 2, dp2)));
}