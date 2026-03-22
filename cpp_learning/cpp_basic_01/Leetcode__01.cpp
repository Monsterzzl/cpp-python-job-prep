// palindrome_number (a number that reads the same backward as forward)
#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool isPalindrome1(int x) {
        string s = to_string(x);

        int left = 0;
        int right = s.size() - 1;

        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
    bool isPalindrome2(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        int reversed = 0;
        int original = x;
        while (x > reversed) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }
        return x == reversed || x == reversed / 10;
    }
};

int main() {
    Solution sol;
    cout <<"Method 1: " << endl;
    cout << sol.isPalindrome1(121) << endl;
    cout << sol.isPalindrome1(-121) << endl;
    cout << sol.isPalindrome1(10) << endl;

    cout <<"Method 2: " << endl;
    cout << sol.isPalindrome2(121) << endl;
    cout << sol.isPalindrome2(-121) << endl;
    cout << sol.isPalindrome2(10) << endl;
    
    return 0;
}