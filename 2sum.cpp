#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,int arr[],int n,int sum,int target,vector<int>&current){
     if(i==n){
        {
            if(sum==target){
                for(auto it:current){
                    cout<<it<<" ";
                }
                cout<<endl;
            }
            return;
     }
       }
    //take
    current.push_back(arr[i]);
    subsequence(i+1,arr,n,sum+arr[i],target,current);
    //not take
    current.pop_back();
    subsequence(i+1,arr,n,sum,target,current);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    int target=4;
    int sum=0;
    vector<int> current;
    subsequence(i,arr,n,sum,target,current);
    return 0;

}