#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int> &nums) {
        // Creating an empty frequency map
        unordered_map<int, int> freq;

        // Chunk 1: frequency counting
        for(int i=0; i<nums.size(); i++) {
            freq[nums[i]]++;
        }

        // Chunk 2: frequency ranking
        int maxFreq = 0, secondMaxFreq = 0;
        
        int maxElement = INT_MAX, secondMaxElement = INT_MAX;

        for(auto it: freq) {
                int currentElement = it.first;
                int currentFreq = it.second;
                if (currentFreq > maxFreq) {
                    secondMaxFreq = maxFreq;
                    secondMaxElement = maxElement;

                    maxFreq = currentFreq;
                    maxElement = currentElement;
                }
                else if (currentFreq == maxFreq) {
                    maxElement = min(maxElement, currentElement);
                }
                else if (currentFreq > secondMaxFreq) {
                    secondMaxFreq = currentFreq;
                    secondMaxElement = currentElement;
                }
                else if (currentFreq == secondMaxFreq) {
                    secondMaxElement = min(secondMaxElement, currentElement);
                }
        }
        if (secondMaxFreq == 0) {
            return -1;
        }
        return secondMaxElement;
    }
};

int main() {
    Solution s;
    vector<int> arr = {1,2,2,3,3,3};
    cout << s.secondMostFrequentElement(arr) << endl;
    vector<int> arr1 = {4, 4, 5, 5, 6, 7};
    cout << s.secondMostFrequentElement(arr1) << endl;
    return 0;
}