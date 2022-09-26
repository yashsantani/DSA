#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    string str = "";
    char c;
    cin >> c;
    int num;
    for (int i = 0; i < s.size(); i++)
    {
        if (c > s[i])
        {
            num = i;
            break;
        }
    }
    int cnt = 0;
    for (int i = 0; i < s.size() + 1; i++)
    {
        if (i == num)
        {
            str += c;
        }
        else
        {

            str += s[cnt];
            cnt++;
        }
    }
    cout << str;
}