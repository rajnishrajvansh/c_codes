#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int> s;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
       s.insert(a[i]);
        }
    cout<<"After removing duplicates "<<endl;
    for(auto i=s.begin();i!=s.end();i++){
        cout<<*i<<" ";
    }
}
