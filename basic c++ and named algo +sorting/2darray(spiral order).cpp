#include<bits/stdc++.h>
using namespace std;
int main(){
    int row,col;
    cout<<"enter row col"<<endl;
    cin>>row>>col;
    int arr[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    /*for printing
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    */
   int colst=0,rowst=0,colen=col-1,rowen=row-1;
   while(colen>=colst && rowen>=rowst){
 
       //for row start
       for(int ncol=colst;ncol<=colen;ncol++){
           cout<<arr[rowst][ncol]<<" ";
       }
       rowst++;

       //for col end
       for(int nrow=rowst;nrow<=rowen;nrow++){
           cout<<arr[nrow][colen]<<" ";
       }
       colen--;

       //for row end
       for(int ncol=colen;ncol>=colst;ncol--){
           cout<<arr[rowen][ncol]<<" ";
       }
       rowen--;

       // for col start
       for(int nrow=rowen;nrow>=rowst;nrow--){
           cout<<arr[nrow][colst]<<" ";
       }
       colst++;
   }

}