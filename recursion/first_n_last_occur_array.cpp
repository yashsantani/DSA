#include<bits/stdc++.h>
using namespace std;
int f_occ(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return f_occ(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    int rest_arr=lastocc(arr,n,i+1,key);
    if(rest_arr!=-1){
        return rest_arr; 
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
int arr[]={1,2,3,2,4,5,4,2,6};
cout<<f_occ(arr,9,0,2)<<" ";
cout<<lastocc(arr,9,0,2);

}