#include<bits/stdc++.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;  
        }

    for(int i=0;i<str.size();i++){
        freq[str[i]-'a']++;
    }

    int maxoccur=0;
    char ans='a';

    for(int i=0;i<=26;i++){
        if(freq[i]>maxoccur){
            maxoccur=freq[i];
            ans=i+'a';
        }

    }
    cout<<maxoccur<<","<<ans;

}