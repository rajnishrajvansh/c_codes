#include <bits/stdc++.h>
using namespace std;

void Insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j>= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j=j-1;
        }
        arr[j + 1] = key;
    }
}
void Printarray(int arr[], int n)
{
    cout << "Sorted elements are: " << endl;
    for (int r = 0; r < n; r++)
    {
        cout << arr[r] << " ";
    }
}

int main()
{
    int n;
    cout << "Enter total elements";
    cin >> n;
    int arr[n];
    cout << "Enter the elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    Insertion(arr, n);
    Printarray(arr, n);
    return 0;
}