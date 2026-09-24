#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countOddDigit(int n) {
        int count = 0;
        while(n > 0) {
            int digit = n%10; 
            if(digit % 2 != 0) {
                count = count + 1;
            }
            n = n/10;
        }
        return count;
    }
};

int main() {
    Solution s;
    cout << s.countOddDigit(5) <<  endl;
    cout << s.countOddDigit(25) <<  endl;
    cout << s.countOddDigit(15) <<  endl;
    cout << s.countOddDigit(153689) <<  endl;
    return 0;
}