#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int gcdBruteForce(int a, int b) {
        int gcd = 1;
        int smaller = min(a, b);   // hint: there is a built-in function for the smaller of two numbers
        for (int i = 1; i <= smaller; i++) {
            if (a%i==0 && b%i==0) {
                gcd = i;
            }
        }
        return gcd;
    }
};

int main() {
    Solution s;
    cout << s.gcdBruteForce(48, 18) << endl;   // expected 6
    cout << s.gcdBruteForce(42, 56);           // expected 14
    return 0;
}