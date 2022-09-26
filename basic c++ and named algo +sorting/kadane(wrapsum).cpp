#include<bits/stdc++.h>
using namespace std;
int kadane(int arr[],int n){
    int maxsum=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<0){
            sum=0;
        }
        maxsum=max(sum,maxsum);
    }
    return maxsum;

}
int main(){
    int n;
    cout<<"enter the no of elelments"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int nonwrapsum=kadane(arr,n),totalsum;
    //cout<<nonwrapsum; 
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }
    int wrapsum=totalsum+kadane(arr,n);
    int ans=max(nonwrapsum,wrapsum);
    cout<<ans;
    }