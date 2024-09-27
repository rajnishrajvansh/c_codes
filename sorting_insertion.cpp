#include<bits/stdc++.h>
using namespace std;
vector<int> insertion_sort(vector<int> arr,int n){
    for(int i=0;i<n;i++){
       int j=i;
        while(j>0&&arr[j-1]>arr[j])
    {
                int temp=arr[j-1];
                arr[j-1]=arr[j];
                arr[j]=temp;
                j--;
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
       vector<int> result= insertion_sort(arr,n);
       for(auto it:result){
        cout<<it<<" ";
       }
       cout<<endl;
    }
}