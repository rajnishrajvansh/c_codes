#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    vector<vector<int>> rotateMatrix(int k, vector<vector<int>> mat) {
        int n=mat.size();
        cout<<n;
        for(int l=0;l<k;l++){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mat[i][j]=mat[i][n-j];
            }
        }
        // code here
    }
    return mat;
    }
};
int main(){
    vector<vector<int>> mat={{1,2,3},{4,5,6},{7,8,9}};
    Solution s;
    vector<vector<int>> ans=s.rotateMatrix(1,mat);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[0].size();j++){
            cout<<ans[i][j]<<" ";
            }
            cout<<endl;
}
}