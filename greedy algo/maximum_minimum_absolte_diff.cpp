#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());
    int mindiff = 0;
    for (int i = 0; i < n / 2; i++)
    {
        mindiff += abs(v[i] - v[i + (n / 2)]);
    }
    cout << "mindiff" << mindiff;
    int maxdiff = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        maxdiff += abs(v[i] - v[i + 1]);
    }
    cout << "maxdiff" << maxdiff;
}