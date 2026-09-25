#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        long long num = n; // bigger type, so num * sign can't overflow
        // edge case resolved for signed numbers.
        int sign = 1;
        if(num<0) sign = -1;
        num = num * sign;

        // number reversal main logic
        int reversed_num = 0;
        while(num > 0) {
            int digit = num % 10;

            //Runtime error resolved for the input case 1534236469.
            if(reversed_num > INT_MAX/10) return 0;
            if(reversed_num == INT_MAX/10 && digit>7) return 0;

            reversed_num = reversed_num * 10 + digit;
            num=num/10;
        }
        // restoring the sign.
        reversed_num = reversed_num * sign;
        return reversed_num;
    }
};

int main() {
    Solution s;
    cout << s.reverseNumber(25) << endl;
    cout << s.reverseNumber(123) << endl;
    cout << s.reverseNumber(-120) << endl;
    cout << s.reverseNumber(1534236469) << endl;
    return 0;
}