#include <bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int count = 0, passes = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            passes++;
            if (arr[j] > arr[j + 1])
            {
                int c = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = c;
                count++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl
         << "Total Swap " << count;
    cout << endl
         << "Total Compare " << passes;
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
    BubbleSort(arr, n);
}