#include<bits/stdc++.h>
using namespace std;

void Bubblesort(int arr[],int n){ //64,12,54,10,4,26
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

void Display(int arr[],int n){
    cout<<endl<<"Sorted array are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the total elements";
    cin>>n;
    int arr[n];
    cout<<"Enter elements";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Bubblesort(arr,n);
    Display(arr,n);
}