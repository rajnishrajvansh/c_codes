#include<bits/stdc++.h>
using namespace std;
void reverse(int a,int arr[],int n){
if(a>n){
    return;
}
swap(arr[a],arr[n]);
reverse(a+1,arr,n-1);
}
int main(){
    int arr[]={1,4,3,6,4,7,9};
    int a=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    reverse(a,arr,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}