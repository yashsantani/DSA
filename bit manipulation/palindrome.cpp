#include<bits/stdc++.h>
using namespace std;
int palindrome(int n){
    int rev=0;
    int temp=n;
    while(temp>0){
        rev=(rev<<1)|(temp&1);
        temp=temp>>1;
    }
    return rev;
}
int main(){
    if(palindrome(10)==10){
        cout<<"palindrome";
    }
    else{
        cout<<"not palindrome";
    }
}