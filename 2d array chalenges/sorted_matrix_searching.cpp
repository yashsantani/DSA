#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,element;
    cin>>n>>m;
    cout<<"enter the element for searching";
    cin>>element;
    int arr[n][m];
    cout<<"enter the element for matrix";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool flag=false;
    int r=0,c=m-1;
    while(r<n and c>=0){
        if(arr[r][c]== element){
            flag=true;
        }
        if(arr[r][c]<element){
            r++;
        }
        else
        c--;
       
    }
    if(flag){
        cout<<"element found";
    }
    else{
        cout<<"not found";
    }


    
}