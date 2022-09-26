#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    //using for loop
    //for(int i=0;i<str.size();i++){
    //    if(str[i]>='a' && str[i]<='z'){
    //        str[i]-=32;
    //    }
    //}
    //using transform function
    transform(str.begin(),str.end(),str.begin(),::toupper);
    cout<<str;

}