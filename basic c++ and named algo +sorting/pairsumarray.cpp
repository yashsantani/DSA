#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n,sum;
    cout<<"enter the no of elelments"<<endl;
    cin>>n;
    cout<<"enter the sum"<<endl;
    cin>>sum;
    cout<<"enter the elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n;j++){
            if(arr[i]+arr[j]==sum){
                cout<<i<<" "<<j;
                return true;
            }
        }
    }
}