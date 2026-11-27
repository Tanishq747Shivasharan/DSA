#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    void reverseHelper(vector<char>& s, int left, int right){
        if (left >= right) return;
        swap(s[left], s[right]);
        reverseHelper(s, left + 1, right - 1);
    }

    vector<char> reverseString(vector<char>& s){
        reverseHelper(s, 0, s.size() - 1);
        return s;
    }
};

int main() {
    Solution s;
    vector<char> str = {'b', 'y', 'e'};
    vector<char> result = s.reverseString(str);

    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}