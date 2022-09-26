#include <bits/stdc++.h>
using namespace std;
const int N = 256;
int main()
{
    string str, res;
    getline(cin, str);
    bool arr[N] = {false};
    for (int i = 0; i < str.size(); i++)
    {
        int n = str[i];
        if (arr[n] == false)
        {
            res += str[i];
            arr[n] = true;
        }
    }
    cout << res;
}