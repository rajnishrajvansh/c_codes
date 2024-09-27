#include <bits/stdc++.h>
using namespace std;
int lower_upper_bound(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    int ans = 0;
    int flag = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= target)
        {
            flag++;
            ans = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    if (flag > 0)
    {
        return ans;
    }
    else
    {
        return -1;
    }
}
int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n, target;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "Enter target ";
        cin >> target;
        sort(arr.begin(),arr.end());
        int res = lower_upper_bound(arr, n, target);
        cout<<"Lower Bound is: "<<res<<endl;
    }
    return 0;
}