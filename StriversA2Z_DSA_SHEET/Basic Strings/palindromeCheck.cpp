#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			int n=s.length();
            for(int i=0; i<n/2; i++) {
                if(s[i] != s[n-1-i]) {
                    return false;
                }
            }
            return true;
		}
};

int main() {
    Solution s;
    string s1 = "hello";
    cout << s.palindromeCheck(s1) << endl; // 0 means false
    string s2 = "madam";
    cout << s.palindromeCheck(s2) << endl; // 1 means true
    string s3 = "abcda";
    cout << s.palindromeCheck(s3) << endl; // 0 meanse false
    return 0;
}