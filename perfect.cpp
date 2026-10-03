#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPerfect(int n) {
        // find the proper divisors of n.
        int sum = 0;
        int i = 1;
        while(i<n) {
            if(n%i==0) {
                // Add the divisor
                sum = sum + i;
            }
            i++;
        }
        // Compare the added result with the original number.
        if(sum == n) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    cout << s.isPerfect(4) << endl;
    return 0;
}