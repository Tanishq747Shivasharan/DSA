#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        unordered_map<char, char> table1;   // s-letter -> t-letter
        unordered_map<char, char> table2;   // t-letter -> s-letter

        for (int i = 0; i < s.length(); i++) {
            char x = s[i];
            char y = t[i];

            // Rule 1: x is recorded in table1, but its partner is not y
            if (table1.count(x) && table1[x] != y) {
                return false;
            }

            // Rule 2: y is recorded in table2, but its partner is not x
            if (table2.count(y) && table2[y] != x) {
                return false;
            }

            table1[x] = y;
            table2[y] = x;
        }
        return true;
    }
};

int main() {
    Solution sol;
    cout << sol.isIsomorphic("egg", "add") << endl;      // expect 1
    cout << sol.isIsomorphic("apple", "bbnbm") << endl;  // expect 0
    cout << sol.isIsomorphic("paper", "title") << endl;  // expect 1
    return 0;
}