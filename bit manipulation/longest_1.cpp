#include<bits/stdc++.h>
using namespace std;
int cons_1(int n){
    int count=0;
    int maxcount=0;
    while(n!=0){
        if((n & 1)){
            count++;
        }
        else{
            count=0;
        }
        n=n>>1;
        maxcount=max(maxcount,count);
    }
    return maxcount;
}
int main(){
    int n;
    cin>>n;
    cout<<cons_1(n);
}