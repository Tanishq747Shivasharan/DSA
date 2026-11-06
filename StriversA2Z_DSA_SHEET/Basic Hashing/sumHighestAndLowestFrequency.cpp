#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int sumHighestAndLowestFrequency(vector<int>& nums) {
        // Creating an empty frequency map
        unordered_map<int, int> freq;

        // Chunk 1: frequency counting
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Chunk 2: Find highest and lowest frequencies
        int maxFreq = 0, minFreq = 0;

        for(auto it:freq) {
            int currentFreq = it.second;
            if (currentFreq > maxFreq) {
                maxFreq++;
            }
            if (currentFreq < minFreq) {
                minFreq++;
            }
        }
        return maxFreq + minFreq;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    cout << s.sumHighestAndLowestFrequency(arr) << endl;
    vector<int> arr1 = {4, 4, 5, 5, 6};
    cout << s.sumHighestAndLowestFrequency(arr1) << endl;

    return 0;
}