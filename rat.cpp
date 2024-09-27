#include <bits/stdc++.h>
using namespace std;
class Rats
{
    int target;

public:
    Rats()
    {
        cout << "Enter value of target";
        cin >> target;
    }
    int calculate(int arr[],int n)
    {
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+arr[i];
            if(sum>=target){
                return i+1;
            }
        }
        return 0;
    }
};
int main()
{
    int rats = 2;
    int arr[] = {2, 8, 3, 5, 7, 4, 1, 2};
      int n=sizeof(arr)/sizeof(arr[0]);
    Rats obj;
    int result = obj.calculate(arr,n);
    cout << result;
    return 0;
}