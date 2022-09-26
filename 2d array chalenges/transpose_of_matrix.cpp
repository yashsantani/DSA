#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"enter row column";
    cin>>n>>m;
    int arr[n][m];
    cout<<"enter the elements";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"entered matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<m;j++){
            //cout<<"in loop";
            int temp=arr[j][i];
            arr[j][i]= arr[i][j];
            arr[i][j]=temp;
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }

}