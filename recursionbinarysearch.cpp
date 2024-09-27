#include<bits/stdc++.h>
using namespace std;
int Binary_search(int arr[][3],int start,int end,int target,int col){
    if(start>end){
        return -1;
    }
        int mid=(start+end)/2;
        int element=arr[mid/col][mid%col];
        if(element==target){
            return mid;
        }
        
    if(element<target){
     return  Binary_search(arr,mid+1,end,target,col);
    }
    else{
        end=mid-1;
       Binary_search(arr,start,mid-1,target,col);
    }
    }
int main(){
    
    int row=3;
    int col=3;
    int arr[][3]={{1,2,3},{4,5,6},{7,8,9}};
    int target;
    cin>>target;
    int start=0;
    int end=(row*col)-1;
   int res= Binary_search(arr,start,end,target,col);
   if(res>0){
    cout<<"Number is found at "<< res;
   }
   else{
    cout<<"Number not found ";
   }
   return 0;
}
