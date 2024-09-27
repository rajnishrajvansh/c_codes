#include<bits/stdc++.h>
using namespace std;
vector<int> bubble_sort(vector<int> arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}
int main(){
    int t;
    cout<<"Enter test cases: "<<endl;
    cin>>t;
    while(t--){
        int n;
        cout<<"Enter size of array ";
        cin>>n;
       vector <int> arr(n);
        for(int i=0;i<n;i++){
        cin>>arr[i];
        }
       vector<int> result= bubble_sort(arr,n);
       for(auto it:result){
        cout<<it<<" ";
       }
       cout<<endl;
    }
}