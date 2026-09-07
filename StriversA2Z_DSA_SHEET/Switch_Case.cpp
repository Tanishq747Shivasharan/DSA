/* Given the integer day denoting the day number, print on the screen which day of the week it is. Week starts from Monday and for values greater than 7 or less than 1, print Invalid.

Ensure only the 1st letter of the answer is capitalised. */

# include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void whichWeekDay(int day) {
        switch (day)
        {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thuresday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Invalid" << endl;
            break;
        }
    }
};

int main() {
    Solution s;
    s.whichWeekDay(3);
    s.whichWeekDay(8);
    s.whichWeekDay(2);
    return 0;
}