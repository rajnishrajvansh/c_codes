#include <bits/stdc++.h>
using namespace std;

int binary_search(vector<int> arr, int n, int target)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int t;
    cout << "Enter the number of test cases: ";
    cin >> t;
    while (t--)
    {
        int n;
        cout << "Enter the size of the array: ";
        cin >> n;
        vector<int> arr(n);
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int target;
        cout << "Enter the target: ";
        cin >> target;
        sort(arr.begin(), arr.end());
        int res = binary_search(arr, n, target);
        if (res == -1)
        {
            cout << "Target is not present" << endl;
        }
        else
        {
            cout << "Target is present at index: " << res << endl;
        }
    }
    return 0;
}
