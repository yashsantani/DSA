#include<bits/stdc++.h>
using namespace std;
void s_of_era(int n){
    int prime[100]={0};
    for(int i=2;i<n;i++){
        if(prime[i]==0){

            for(int j=i*i;j<n;j+=i){
                prime[j]=1;
            }
        }
    }
    for(int i=2;i<n;i++){
        if(prime[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cin>>n;
    s_of_era(n);
    return 0;
}