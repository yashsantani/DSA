#include<bits/stdc++.h>
using namespace std;
int getbit(int n, int pos){
    return ((n & (1<<pos))!=0);
}
void unique(int arr[],int n){
    int xorsum=0;
    for(int i=0;i<n;i++){
        xorsum=xorsum^arr[i];
    }
    //using only this above for loop we can find only 1 unique no in array which is not present 2 times
    int temp=xorsum;
    int setbit=0;
    int pos=0;
    while(setbit!=1){
        setbit=xorsum&1;
        pos++;
        xorsum=xorsum>>1;
    }
    int newxor=0;
    for(int i=0;i<n;i++){
        if(getbit(arr[i],pos-1)){
            newxor=newxor^arr[i];
        }
    }
    cout<<newxor<<endl;
    cout<<(newxor^temp)<<endl;
}
int main(){
    int arr[]={1,2,3,1,2,3,5,7};
    unique(arr,8);
    return 0;
}