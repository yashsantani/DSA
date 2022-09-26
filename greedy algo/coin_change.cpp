#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int getinput;
        cin >> getinput;
        a.push_back(getinput);
    }
    sort(a.begin(), a.end(), greater<int>());
    int money;
    cin >> money;
    int num_of_coins = 0;
    for (int i = 0; i < n; i++)
    {
        num_of_coins += money / a[i];
        money -= (money / a[i]) * a[i];
    }
    cout << num_of_coins;
}