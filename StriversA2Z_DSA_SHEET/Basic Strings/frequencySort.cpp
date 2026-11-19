#include <bits/stdc++.h>
using namespace std;

bool comesBefore(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    return a.first < b.first;
}

class Solution
{
public:
    vector<char> frequencySort(string &s)
    {
        map<char, int> freq;
        for (char ch : s)
        {
            freq[ch]++;
        }

        // Step 1: copy the pairs from the map into a vector
        vector<pair<char, int>> v(freq.begin(), freq.end());

        // Step 2: sort the vector using our comparator
        sort(v.begin(), v.end(), comesBefore);

        // Step 3: keep only the characters, in sorted order
        vector<char> result;
        for (auto p : v)
        {
            result.push_back(p.first);
        }
        return result;
    }
};

int main() {
    Solution sol;
    string s = "tree";
    vector<char> ans = sol.frequencySort(s);
    for (char c : ans) cout << c << " ";
    return 0;
}