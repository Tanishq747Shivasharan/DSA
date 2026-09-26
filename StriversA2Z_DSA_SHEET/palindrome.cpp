#include <bits/stdc++.h>
using namespace std;

// The brute force approach Time Complexity: O(log10 n) because every digit is checked at most once. Space Complexity: O(log10 n) because the number is stored as a string.
/*
1. check if the n is negative. if yes return false
2. if the number is positive then conver the number to string.
3. take two pointers called left and right initially the left pointer is pointing to the first digit in the string and the right pointer is pointing to the last digit in the string.
4. compare the values present at that index using if the values are matching then move the left pointer one step to the right and the right pointer one step to the left. if not then return false.
5. Repeat this process until the pointers meet or cross. At that moment, every important pair has already been checked, so the number is a palindrome.
*/

class brute_force {
    public:
        bool isPalindrome(int n) {
            // Negative number are not palindromes.
            if (n<0) {
                return false;
            }

            string s = to_string(n);

            int left = 0;
            int right = (int)s.size() - 1;

            while (left < right) {
                if(s[left] != s[right]) {
                    return false;
                }
                left++;
                right--;
            }
            return true; // 9ms
        }
};

class better_approach {
    public:
        bool isPalindrome(int x) {

        int original = x;
        int reverse = 0;
        while(x > 0) {
            int digit = x%10;
            if(reverse > INT_MAX/10) return 0;
            if(reverse == INT_MAX/10) return 0;
            reverse = reverse * 10 + digit;
            x = x/10;
        }
        if(reverse == original) {
            return true;
        }
        return false; // 6ms
        }
};

int main() {
    brute_force b;
    cout << (b.isPalindrome(121) ? "true":"false") << endl;

    better_approach bop;
    cout << (bop.isPalindrome(121) ? "true":"false") << endl;
    return 0;
}