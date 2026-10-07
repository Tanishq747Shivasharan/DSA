#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int LCM(int n1, int n2) {
        int candidate;
        for (candidate = 1; !(candidate % n1 == 0 && candidate % n2 == 0); candidate++) {
            // nothing to do inside: the for line does all the work
        }
        return candidate;
    }
};

int main() {
    Solution s;
    cout << s.LCM(48, 18) << endl;   
    cout << s.LCM(42, 56) << endl;           
    cout << s.LCM(4, 6) << endl;   // 12
    cout << s.LCM(3, 5) << endl;   // 15
    cout << s.LCM(4, 12);          // 12
    return 0;
}