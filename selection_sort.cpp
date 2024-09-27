#include<bits/stdc++.h>
using namespace std;

void Selectionsort(int arr[],int n){ //arr=[64,12,25,22,11]
    for(int i=0;i<n;i++){
        int min_index=i; // first minimum index //64 // min=12 ..... 
        for(int j=i+1;j<n;j++){ //j=1 // j=2
            if(arr[j]<arr[min_index]){ //12<64 // 12<25 .... //11<12
                min_index=j;            //min_index=1; //min_index=1....  // min_index=4
            }
        }
        if(min_index!=i){   // min_index(4)!=i(0)
            swap(arr[min_index],arr[i]);  // swap(arr[4],arr[0])// 11,12,25,22,11
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
    Selectionsort(arr,n);
    Display(arr,n);
}