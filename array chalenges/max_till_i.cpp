#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of elements:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        cout<<"max till "<<i<<" "<<max<<endl;
    }
}