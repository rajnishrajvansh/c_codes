#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={4,6,3,2,5};
    int a=0;
    int n=sizeof(arr)/sizeof(arr[0]);
   for(int i=0;i<n/2;i++){
    swap(arr[i],arr[n-i-1]);
   }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }

}