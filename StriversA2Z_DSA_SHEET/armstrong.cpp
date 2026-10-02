#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int original = n;
        int temp = n;
        int count = 0;
        int res = 0;

        // count loop: chop temp, count the digits
        while(temp>0) {
            temp = temp/10;
            count++;
        }

        // refill temp from original
        temp = original;

        // power loop: take the digit, add digit^count to res, chop temp
        while(temp>0) {
            int digit = temp%10;
            res = res + pow(digit,count);
            temp = temp/10;
        }

        // compare res with original and return
        if(original == res) return true;
        return false;
    }
};

int main() {
    Solution s;
    cout << s.isArmstrong(153) << endl;
    cout << s.isArmstrong(12) << endl;
    cout << s.isArmstrong(370) << endl;
    return 0;
}