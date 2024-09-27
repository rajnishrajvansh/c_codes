#include <bits/stdc++.h>
using namespace std;
void Insert(int arr[], int n)
{
   
    stack<int> st;
    for (int i = 0; i < n; i++)
    {
        st.push(arr[i]);
    }
    cout << "Numbers in stack are" << endl;
    while (!st.empty())
    {
         int i=0;
         int arr2[10]={0};
        int p=st.top();
        st.pop();
        if(p==st.top()){
          st.push(arr2[i]);
            i++;
        }
    }
}
int main()
{
    int arr[] = {3, 5, 1, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    Insert(arr, 6);
}