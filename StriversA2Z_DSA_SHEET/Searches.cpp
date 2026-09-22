#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
        int linearSearch(int arr[], int n, int key) {
            for(int i=0; i<=n-1; i++) {
                if(arr[i] == key) {
                    return i;
                }
            }
            return -1;
        }
        void inputArray(int arr[], int n) {
            cout << "Enter elements one by one: ";
            for(int i=0; i<=n-1; i++) {
                cin >> arr[i];
            }
        }
        void printArray(int arr[], int n) {
            for(int i=0; i<=n-1; i++) {
                cout << arr[i];
            }
        }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int key;
    cout << "Enter the element to search: ";
    cin >> key;
    int arr[n];
    Solution s;
    s.inputArray(arr, n);
    s.linearSearch(arr, n, key);
    return 0;
}