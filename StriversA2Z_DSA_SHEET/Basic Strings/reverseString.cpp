#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void reverseString(vector<char> &s)
    {
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
        for (char c : s)
        {
            cout << c << " ";
        }
        cout << endl;
    }
};

int main()
{
    Solution sol;

    vector<char> s1 = {'h','e','l','l','o'};
    sol.reverseString(s1);

    vector<char> s2 = {'b','y','e'};
    sol.reverseString(s2);

    return 0;
}