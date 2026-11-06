#include <bits/stdc++.h>
using namespace std;

class Solution{	
public:		
    string largeOddNum(string& s){
        // Step 1: find the end (rightmost odd digit)
        int end = s.length()-1;
        while(end>=0 && s[end]%2==0) {
            end = end-1;
        }

        if(end < 0) {
            return "";
        }

        // Step 2: find the start (first non-zero digit)
        int start = 0;
        while(s[start] == '0') {
            start = start+1;
        }

        // Step 3: return the piece from start to end
        return s.substr(start, end-start+1);
    }
};

int main() {
    Solution sol;
    string a = "5347";
    string b = "0214638";
    string c = "0032579";
    string d = "4206";
    string e = "0000";
    cout << "[" << sol.largeOddNum(a) << "]" << endl;  // 5347
    cout << "[" << sol.largeOddNum(b) << "]" << endl;  // 21463
    cout << "[" << sol.largeOddNum(c) << "]" << endl;  // 32579
    cout << "[" << sol.largeOddNum(d) << "]" << endl;  // empty
    cout << "[" << sol.largeOddNum(e) << "]" << endl;  // empty
    return 0;
}