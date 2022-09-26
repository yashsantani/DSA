#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n], b[n], c[n], d[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int mx = 0;
    int tempi = 0, tempj = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int curr_sum = abs(a[i] - a[j]) + abs(c[i] - c[j]) + abs(b[i] - b[j]) + abs(d[i] - d[j]);
            if (mx < curr_sum)
            {
                mx = curr_sum;
                tempi = i;
                tempj = j;
            }
        }
    }
    cout << mx + abs(tempi - tempj);
}