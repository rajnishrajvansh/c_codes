#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n;
    int mid;
    int count = 0;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
           cout<< count++;
            return mid;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
            count++;
        }
        else if (arr[mid] < target)
        {
            start = mid + 1;
            count++;
        }
    }
    return -1;
}

int main()
{
    int n;
    cout << "Enter total numbers ";
    cin >> n;
    int arr[n];
    cout << "Enter the numbers ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cout << "Enter target ";
    cin >> target;
    int result = BinarySearch(arr, n, target);
    if (result < 1)
    {
        cout << "Element is not found";
    }
    else
    {
        cout << "Number of iterations " << result;
    }
}