#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        int count = 0;
        if(n==0) {
            return 1;
        }
        while (n > 0) {
            n = n/10;
            count = count + 1;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.countDigit(23);
    return 0;
}