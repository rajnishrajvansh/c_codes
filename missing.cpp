#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
   int zor=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<=n;i++){
        zor=zor^a[i];
        cout<<zor;
    }
    cout<<zor;
    return 0;
}
for(int i=0;i<n;i++){
if(sums[i]==1){
    if(sums.size<i+sums.size()){
        return true;
    }
    else{
        return false;
    }
}
while

}