#include <bits/stdc++.h>
using namespace std;
class Pattern
{
    public:
        int calculate(string str){
        int length=str.length();
        int result=str[0]-'0';
        for(int i=1;i<=length;i++){
          int next_digit=str[i+1]-'0';
            if(str[i]=='A'){
              result=result&next_digit;
            }
            else if(str[i]=='B'){
                 result=result|next_digit;
            }
            else if(str[i]=='C'){
                 result=result^next_digit;
            }
        }
      return result;
        }
};
int main()
{
Pattern first_pattern;
 cout<<first_pattern.calculate("1C0C1C1A0B1");
 cout<<endl;
 cout<<first_pattern.calculate("0C1A1B1C1C1B0A0");
   
}
