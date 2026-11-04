#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        if (nums.empty()) {
            return -1;
        }

        int maxFreq = 0;
        int maxElement = nums[0];

        unordered_map<int, int> freq;

        for (int i = 0; i < nums.size(); i++) {

            freq[nums[i]]++;

            if (freq[nums[i]] > maxFreq) {
                maxFreq = freq[nums[i]];
                maxElement = nums[i];
            }
            else if (freq[nums[i]] == maxFreq) {
                if (nums[i] < maxElement) {
                    maxElement = nums[i];
                }
            }
        }

        return maxElement;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,2,3,3,3};
    cout << s.mostFrequentElement(arr) << endl;
    vector<int> arr1 = {4, 4, 5, 5, 6, 7};
    cout << s.mostFrequentElement(arr1) << endl;
    return 0;
}