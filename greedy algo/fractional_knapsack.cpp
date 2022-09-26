#include <bits/stdc++.h>
using namespace std;
bool compare(vector<int> a, vector<int> b)
{
    double a1 = (double)a[0] / a[1];
    double b1 = (double)b[0] / b[1];
    return a1 > b1;
}
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        int weight, price;
        cin >> price >> weight;
        a.push_back({price, weight});
        // a[price].push_back(weight);
    }
    int weight_of_sack;
    cin >> weight_of_sack;
    sort(a.begin(), a.end(), compare);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // cout << a[i][0];
        if (a[i][1] <= weight_of_sack)
        {
            ans += a[i][0];
            weight_of_sack -= a[i][1];
            continue;
        }
        double vw = (double)a[i][0] / a[i][1];
        ans += vw * weight_of_sack;
        weight_of_sack = 0;
        break;
    }
    cout << ans;
}