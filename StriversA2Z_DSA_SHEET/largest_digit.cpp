#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    int largestDigit(int n) {
        int largest = 0;
        if(n<0) {
            n = n*-1;
        }
        while(n>0) {
            int digit = n%10;
            if(digit > largest) {
                largest = digit;
            }
            n=n/10;
        }
        return largest;
    }
};

int main() {
    Solution s;
    cout << s.largestDigit(0) << endl;
    cout << s.largestDigit(3917) << endl;
    cout << s.largestDigit(99) << endl;
    return 0;
}