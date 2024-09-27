#include <bits/stdc++.h>
using namespace std;
void subsequence(int i, vector<int>str, vector<int>&op,int k,int s);
    if (i == n)
    {
        if (s == k)
        {
            for(auto it:op){
                cout<<*it<<" ";
            }
        }
    }
    op.push_back(arr[i]);
    s = s + arr[i];
    subsequence(i + 1, str, op);
    op.pop_back();
    s-=arr[i];
    subsequence(i+1,str,op);

    }


int main()
{
    int arr[] = {3, 5, 2, 5, 6};
    int k = 5;
    vector<int> op;
   subsequenvce(0,arr,k,0,op);
    return 0;
}