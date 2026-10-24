#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int countPrimes(int n)
    {
        int divCount = 0, i = 2;
        if (n <= 1)
            return 0;
        while (i <= n)
        {
            if (n % i == 0)
            {
                divCount++;
            }
            i++;
        }
        return divCount;
    }
};

int main()
{
    Solution s;
    cout << s.countPrimes(10) << endl;
    cout << s.countPrimes(0) << endl;
    cout << s.countPrimes(1) << endl;
    return 0;
}