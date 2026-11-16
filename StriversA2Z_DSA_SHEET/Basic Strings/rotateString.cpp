#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		bool rotateString(string& s,string& goal){
			if (s.length() != goal.length()) {
                return false;
            }
            string cs = s + s;
            if (cs.find(goal) != string::npos){
                return true;
            }
            return false;
		}
};

int main() {
    Solution S;
    string s = "abcde", goal = "cdeab";
    string s1 = "abcde", goal1 = "adeac";
    string s2 = "abcde", goal2 = "abcde";
    cout << S.rotateString(s,goal) << endl;
    cout << S.rotateString(s1,goal1) << endl;
    cout << S.rotateString(s2,goal2) << endl;
    return 0;
}