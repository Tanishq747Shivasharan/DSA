#include <bits/stdc++.h>
using namespace std;

class Solution { 
public: 
    void reverse(int arr[], int n) {
        int j = n-1;
        for(int i=0; i<j; i++) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            j--;
        }
    }
    void printArray(int arr[], int n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Solution s;
    int arr[] = {1, 2, 3, 4 ,5};
    int arr1[] = {1, 2, 1, 1 ,5, 1};
    s.reverse(arr, 5);
    s.reverse(arr1, 6);

    s.printArray(arr, 5);
    s.printArray(arr1, 6);

    return 0;
}