#include<bits/stdc++.h>
using namespace std;
void subsequence(int i,int arr[],vector<int> op,int n){
    if(i==n){
       for(auto it:op){
        cout<<it<<" ";
       }
       cout<<endl;
        return;
    }
    //take
    op.push_back(i);
    subsequence(i+1,arr,op,n);
    //not take
    op.pop_back();
    subsequence(i+1,arr,op,n);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0])+1;
    int i=1;
    vector<int> op;
    subsequence(i,arr,op,n);
    return 0;

}