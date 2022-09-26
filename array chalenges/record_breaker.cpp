#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"no of elements:"<<endl;
    cin>>n;
    int arr[n+1];
    arr[n]=-1;
    cout<<"enter the elements";
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    };
    int rb=0;
    int max=-1;
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max && arr[i]>arr[i+1]){
            max=arr[i];
            rb++;
        }
    
    }
    cout<<rb;
}