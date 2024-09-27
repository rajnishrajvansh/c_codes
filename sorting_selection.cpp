#include<bits/stdc++.h>
using namespace std;
vector<int> selection_sort(vector<int> arr,int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
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
       vector<int> result=selection_sort(arr,n);
       for(auto it:result){
        cout<<it<<" ";
       }
       cout<<endl;
    }
}