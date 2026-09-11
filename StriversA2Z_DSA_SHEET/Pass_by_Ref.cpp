/* Given an array arr of n elements. The task is to reverse the given array. The reversal of array should be inplace.

Example 1
Input: n=5, arr = [1,2,3,4,5]
Output: [5,4,3,2,1]
Explanation: The reverse of the array [1,2,3,4,5] is [5,4,3,2,1]

Example 2
Input: n=6, arr = [1,2,1,1,5,1]
Output: [1,5,1,1,2,1]
Explanation: The reverse of the array [1,2,1,1,5,1] is [1,5,1,1,2,1]. */

#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int>& arr)
{
    int left = 0;
    int right = arr.size() - 1;
    int temp;

    while (left < right)
    {
        temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    reverse(arr);

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}