#include<iostream>
#include<cctype> // For tolower() and isalnum()
using namespace std;

bool isPalindrome(string s) {
    int left = 0;
    int right = s.size() - 1; // Initialize right to the last character index

    while(left < right) {
        // Move left pointer to the next alphanumeric character
        while(left < right && !isalnum(s[left])) {
            left++;
        }

        // Move right pointer to the previous alphanumeric character
        while(left < right && !isalnum(s[right])) {
            right--;
        }

        // Convert characters to lowercase and compare
        if(tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }

    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    bool res = isPalindrome(s);
    cout << (res ? "Is a palindrome" : "Not a palindrome") << endl;
}
-0