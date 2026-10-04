#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
    bool isPrime(int num) {
        int count = 2;
        int divCount = 0, i=1;
        if(num<=1) return false;
        while(i<=num) {
            if(num%i==0) {
                divCount++;
            }
            i++;
        }
        if(divCount == count) {
            return true;
        }
        return false;
    }
};

int main() {
    Solution s;
    cout << s.isPrime(5)<< endl;
    cout << s.isPrime(8)<< endl;
    return 0;
}