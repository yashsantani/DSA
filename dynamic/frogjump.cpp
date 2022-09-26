#include <bits/stdc++.h>
using namespace std;
int rec(int n, int arr[])
{
    vector<int> dp(n, 0);
    dp[0] = 0;
    for (int i = 1; i < n; i++)
    {
        int minus1 = abs(arr[i] - arr[i - 1]) + dp[i - 1];
        int minus2 = INT_MAX;
        if (i > 1)
            int minus2 = abs(arr[i] - arr[i - 2]) + dp[i - 2];
        dp[i] = min(minus1, minus2);
    }
    return dp[n - 1];
    // int minus1 = abs(arr[n] - arr[n - 1]) + rec(n - 1, arr);
    // int minus2 = abs(arr[n] - arr[n - 2]) + rec(n - 2, arr);
    // return min(minus1, minus2);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }

    int minimum = rec(n, arr);
    cout << minimum;
}