#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int reversed_num = 0;
        while(n > 0) {
            int digit = n % 10;
            reversed_num = reversed_num * 10 + digit;
            n=n/10;
        }
        return reversed_num;
    }
};

int main() {
    Solution s;
    cout << s.reverseNumber(25) << endl;
    cout << s.reverseNumber(123) << endl;
    cout << s.reverseNumber(54) << endl;
    return 0;
}