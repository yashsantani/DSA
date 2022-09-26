#include<iostream>
using namespace std ;
int binary_search(int arr[],int n, int key){
    int start_no=0,end_no=n;
    while(start_no<=end_no){
        int mid=(start_no+end_no)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end_no=mid-1;
        }
        else{
            start_no=mid+1;
        }
    }
    return -1;    
};


int main(){
    int n,key;
    cout<<"enter the no of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<binary_search(arr,n,key);

}