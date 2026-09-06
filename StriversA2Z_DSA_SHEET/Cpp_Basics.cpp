#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void array(int arr[], int n) {
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "\t";
        }
    }
    void input_array(int arr[], int n) {
        cout << "Enter array elements one by one\n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
    }
    int array_access(int arr[], int n) {
        cout << "\n" << "Enter the index to access the element: ";
        cin >> n;
        return arr[n];
    }
    int getLenghtofStr(string s) {
        return s.length();
    }
    void accessCharacters(string s) {
        // Loop through each index
        for (int i = 0; i < s.length(); i++) {
            // Print the character at index i
            cout << s[i];
        }
    }
    bool compareStrings(string str1, string str2) {
        return str1 == str2;
    }
};

int main() {
    Solution s;
    int n;
    string str = "Without a kernal there is no OS";
    string substr = "OS";
    cout << "Enter the length of the array: ";
    cin >> n;
    int arr[n];
    s.input_array(arr, n);
    s.array(arr, n);
    cout << s.array_access(arr, n) << "\n";
    cout << "Length of the string is :" << s.getLenghtofStr(str);
    cout << endl;
    s.accessCharacters(substr);
    if (s.compareStrings(str, substr))
    {
        cout << "\nString 1 is equal to String 2";
    }
    else {
        cout << "\nString 1 not equal to String 2";
    }
    return 0;
}