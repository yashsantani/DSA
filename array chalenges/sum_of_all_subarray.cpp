#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of elements:"<<endl;
    cin>>n;
    int arr[n-1];
    cout<<"enter the elements"<<endl;
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    };
    int sum=0;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            cout<<sum<<endl;
        }
    }
}