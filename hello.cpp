#include<iostream>
using namespace std;
void fun(int &count){
        if(count==0){
            return; }
cout<<count<<endl;
count--;
fun(count);
        }
int main(){
    int count=10;
     fun(count);
    return 0;
}