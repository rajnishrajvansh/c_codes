#include<bits/stdc++.h>
using namespace std;
void Stocks(vector <int> arr){
    vector<int>c=arr;
    sort(c.begin(),c.end());
    int i=0;
    int j=arr.size();
    while(i<j){
        cout<<c[--j]<<" "<<c[i++]<<" ";
    }
    }
int main(){
    vector <int> arr={9,1,6,3,7,10};

    Stocks(arr);
}