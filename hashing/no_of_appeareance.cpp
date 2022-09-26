#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    map<int, int> freq;
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        freq[y]++;
    }
    map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    {
        cout << it->first; //<< " " << it->second << endl;
    }
}