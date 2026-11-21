#include <bits/stdc++.h>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int N){
			// using the functional way
			if(N == 0) return 0;

			return N + NnumbersSum(N-1); // The NnumbersSum(N-1) is a recursive call!
		}
};

int main() {
    Solution s;
	int n = 3;
	cout << s.NnumbersSum(n) << endl;
    return 0;
}