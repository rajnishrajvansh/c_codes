#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={4,6,3,2,5};
    int a=0;
    int z=sizeof(arr)/sizeof(arr[0])-1;
    while(a<=z){
        swap(arr[a],arr[z]);
        a++;
        z--;
    }
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }

}