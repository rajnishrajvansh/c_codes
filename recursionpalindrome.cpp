#include<bits/stdc++.h>
using namespace std;
bool palindrome(int a,string str,int n){
    if(a>n/2){
        return true;
    }
    if(str[a]!=str[n-a-1]){
        return false;
    }
    return palindrome(a+1,str,n);
}
int main(){
    string str="MALAYALAM";
    int a=0;
    int n=str.length();
    bool res=palindrome(a,str,n);
    if(res==true){
        cout<<"Word is Palindrome ";
    }
    else{
        cout<<"Not Palindrome.";
    }
}