#include <bits/stdc++.h>
using namespace std;
string moveallxx(string s)
{
    if (s.size() == 0)
    {
        return "";
    }
    string ans = moveallxx(s.substr(1));
    if (s[0] == 'x')
    {
        return (ans + 'x');
    }
    return s[0] + ans;
}
int main()
{
    cout << moveallxx("abcxxdabcxddxasc");
}