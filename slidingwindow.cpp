#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void Sliding(int arr[],int n,int window){
    int Max=INT_MIN;
for(int i=0;i<n-window+1;i++){
   int sum=0;
    for(int j=0;j<window;j++){
        sum=sum+arr[i+j];
            Max=max(sum,Max);
        }
    }
    cout<<"Maximum is: "<<Max;
}
int main(){
    int n,window;
    cout<<"Enter total elements";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Enter the window";
    cin>>window;
    Sliding(arr,n,window);
}