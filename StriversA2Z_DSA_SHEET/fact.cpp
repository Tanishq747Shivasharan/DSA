#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        // int factorial(int n) {
        long long factorial(int n){
            // int fact = 1; // fails for factorial of 13
            long long fact = 1;
            int i = 1;
            while(i<=n) {
                fact = fact * i;
                i++;
            }
            return fact;
        }
};

int main() {
    Solution s;
    cout << s.factorial(5) << endl; // returns 120 as factorial of 5 is 120
    cout << s.factorial(0) << endl; // returns 1 as factorial of 0 is 1
    cout << s.factorial(13) << endl; // edge case! int supports only 2.1 billion prints garbage value if used with int! 
    return 0;
}