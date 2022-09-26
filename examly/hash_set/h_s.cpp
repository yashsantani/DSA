#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_set<char> h;
    string str;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        h.insert(str[i]);
    }
    unordered_set<char>::iterator it;
    for (it = h.begin(); it != h.end(); it++)
    {
        cout << *it << "";
    }
}