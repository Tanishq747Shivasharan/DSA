#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        bool isSorted(int arr[], int n) {
            for(int i=0; i<n-1; i++) {
                if(arr[i] > arr[i+1]) {
                    return false;
                }
            }
            return true;
        }
};

int main() {
    Solution s;
    int arr[] = {12};
    int arr1[] = {1, 2, 3, 5, 4};
    int arr2[] = {5, 4, 6, 7, 8};
    cout << s.isSorted(arr1, 5) << endl;
    cout << s.isSorted(arr2, 5) << endl;
    cout << s.isSorted(arr, 1) << endl;
    return 0;
}