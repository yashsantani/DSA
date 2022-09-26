#include<bits/stdc++.h>
using namespace std;
string move_allx(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=move_allx(s.substr(1));
    if(ch=='x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<move_allx("abughsdxoiuanxkujkxxx");
} 