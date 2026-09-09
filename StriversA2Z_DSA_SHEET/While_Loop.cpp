/* Given a digit d (0 to 9), find the sum of the first 50 positive integers (integers > 0) that end with digit d.

A number ends with digit d if its last digit is d.

Example 1
Input: d = 1
Output: 12300

Explanation:
The first 50 positive integers ending with 1 are: 1, 11, 21, 31, ..., 491
Their sum is 12300.

Example 2
Input: d = 5
Output: 12500 */

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int whileLoop(int d) {
        int i=0, sum=0;
        if (d>=0 && d<10)
        {
            int current = d;
            while (i < 50)
            {
                sum += current;
                current += 10;
                i++;
            }
        }
        return sum;
    }
};

int main() {
    Solution s;
    cout << s.whileLoop(1) << endl;
    cout << s.whileLoop(5);
    return 0;
}