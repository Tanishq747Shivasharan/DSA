#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		string longestCommonPrefix(vector<string>& strs){
			string prefix = "";

            for(int col=0; col<strs[0].length(); col++) {
                char ch = strs[0][col];

                for(int i=1; i<strs.size(); i++) {
                    if(col>=strs[i].length() || strs[i][col] != ch) {
                        return prefix;
                    }
                }
                prefix = prefix + ch;
            }
            return prefix;
		}
};

int main() {
    Solution s;
    vector<string> vstrs = {"fly", "flow", "flowers", "flight"};
    cout << s.longestCommonPrefix(vstrs) << endl;
    vector<string> vstrs1 = { "dog", "cat", "animal", "monkey"};
    cout << s.longestCommonPrefix(vstrs1) << endl;
    return 0;
}