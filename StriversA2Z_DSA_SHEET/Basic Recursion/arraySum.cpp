#include <bits/stdc++.h>
using namespace std;

// Using a helper function
/* int helper(vector<int> &nums, int i) {
    if (i == nums.size()) return 0; // base case

    return nums[i] + helper(nums, i+1); // recursive call
}

class Solution{	
	public:
		int arraySum(vector<int>& nums){
			return helper(nums, 0);
		}
}; */

// Without using a helper function.
class Solution {
public:
    int arraySum(vector<int>& nums) {
        if (nums.empty()) return 0;     // base case: nothing left to add

        int last = nums.back();         // read the last element and remember it
        nums.pop_back();                // remove the last element from the vector

        int smaller = arraySum(nums);   // sum of the now-smaller vector

        return last + smaller;          // add the remembered element
    }
};

int main() {
    Solution s;
    vector<int> numsarray = {5,8,1};
    cout << s.arraySum(numsarray) << " " ;
    cout << numsarray.size();
    return 0;
}