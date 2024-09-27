#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void Max_Sum(int arr[],int n){
  int sum=0;
  int target;
for(int i=0;i<n;i++){
    sum=sum+arr[i];
    if(sum>=total){
        target=i-1;
        break;
    }
}









}
int main(){
    int n;
    cout<<"Enter total elements";
    cin>>n;
    int arr[n];
    int total;
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter total ";
    cin>>total;
    Sliding(arr,n,total);
}