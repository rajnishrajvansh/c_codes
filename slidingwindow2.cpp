#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
void Sliding(int arr[],int n,int window){
    int sum=0;
for(int i=0;i<window;i++){
    sum += arr[i];
}
cout<<sum<<endl;
int win_sum=sum;
 int Max=INT_MIN;
for(int i=window;i<n;i++){
   win_sum = win_sum + arr[i]-arr[i-window];
   Max=max(win_sum,sum);
    cout<<" "<<Max<<" ";
}
cout<<"Maximum sum: "<<Max;

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