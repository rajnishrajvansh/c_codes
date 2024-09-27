#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter total elements" << endl;
    cin >> n;
    int arr[n];
    int target;
    cout << "Enter the elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
   
    cout << "Enter the target";
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << "Find at index " << i << endl;
            break;
        }
       
    }
     return 0;
}
