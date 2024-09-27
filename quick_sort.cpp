#include <bits/stdc++.h>
using namespace std;

void  QuickPartion(int arr[], int low, int high)
{ // 15,12,54,10,4,26
    int i = low;
    int j = high;
    int pivot = arr[low];
    while (i < j)
    {
        do
        {
            i++;
        } while (arr[i] <= pivot);

        do
        {
            j--;
        } while (arr[j] > pivot);
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
     for (int i = 0; i < high; i++)
    {
        cout << arr[i] << " ";
    }
}

void Display(int arr[], int n)
{
    cout << endl
         << "Sorted array are:" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter the total elements";
    cin >> n;
    int arr[n];
    cout << "Enter elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    QuickPartion(arr, 0, n);
    //Display(arr, n);
}