#include<iostream>
using namespace std;
int main(){
    /*  int n,decrement;
    cin>>n;
    decrement=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=decrement;j++){
            cout<<j;
        };
        decrement--;
        cout<<endl;
    }; or */
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n+1-i;j++){
            cout<<j<<" ";
        };
        cout<<endl;
    };
}