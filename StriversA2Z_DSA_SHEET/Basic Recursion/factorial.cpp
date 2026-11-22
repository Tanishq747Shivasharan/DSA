#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		long long int factorial(int n){
			//using the functional way.
            if (n==0) return 1; // if we would return 0 then our result would have been 0 cause anything multiplied by 0 is 0

            return n * factorial(n-1);  // factorial(n-1) is a recursive call.
		}
};

int main() {
    Solution s;
    cout << s.factorial(3) << endl;
    cout << s.factorial(5) << endl;
    cout << s.factorial(24) << endl;
    return 0;
}