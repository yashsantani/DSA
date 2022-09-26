#include<bits/stdc++.h>
using namespace std;
int decimal_to_binary(int n){
     int i=1;
     int ans=0;
     while(i<=n){
         i*=2;
     }
    i/=2;
    while(i>0){
        int lastdigit=n/i;
        n-=lastdigit*i;
        i/=2;
        ans=ans*10+lastdigit;
    } 
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decimal_to_binary(n);

}