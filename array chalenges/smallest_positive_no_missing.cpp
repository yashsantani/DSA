#include "bits/stdc++.h"
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int chkarr[n];
    for(int i=0;i<n;i++){
        chkarr[i]=0;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            chkarr[arr[i]]=1;
        }

    }
    int ans=-1;
    for(int i=0;i<n;i++){
        if(chkarr[i]==0){
            ans=i;
            cout<<ans;
            break;
        }
    }
   // for(int i=0;i<n;i++){
   //     cout<<chkarr[i];
    //}

}