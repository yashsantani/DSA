#include <bits/stdc++.h>

using namespace std;
int main()
{
    vector<int> v;
    fstream readf;
    fstream printf;
    readf.open("read.txt");
  
    if (!readf)
    {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    string tp;
    while (getline(readf, tp))
    {
         
        stringstream ss(tp);
        string word;
        while (ss >> word)
        {
            v.push_back(stoi(word));
        }
    }
    readf.close();
    printf.open("print.txt");
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        printf << v[i] << " ";
    }
}