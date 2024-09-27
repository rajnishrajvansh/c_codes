#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> arr={4,5,2,4,5,2,5};
    list<bool> lst;
    int extra=3;
    int j=0;
    int max=*max_element(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        if(arr[i]+extra>max){
            lst.push_back(true);
        }
        else{
            lst.push_back(false);
        }
        
    }
    for (bool i : lst) {
        cout << i << ' ';
    }
}