#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string &s, int left, int right) {
    if(left >= right) return true;
    if(s[left]!=s[right]) return false;
    return isPalindrome(s, left+1, right-1);
}

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			return isPalindrome(s, 0, s.size()-1);
		}
};

int main() {
    Solution s;
    string str = "hannah";
    string str1 = "hello";
    cout << s.palindromeCheck(str) << endl;
    cout << s.palindromeCheck(str1) << endl;
    return 0;
}