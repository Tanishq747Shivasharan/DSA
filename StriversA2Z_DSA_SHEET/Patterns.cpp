#include <bits/stdc++.h>
using namespace std;

void pattern1(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n) {
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern4(int n) {
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= i; j++) {
            cout << i << " ";
        }
        cout << endl;
    }
}
void pattern5(int n) {
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n) {
    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern7(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern8(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern9(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        for (int j = 0; j < (2 * n - (2 * i + 1)); j++) {
            cout << "*";
        }
        for (int j = 0; j < i; j++) {
            cout << " ";
        }
        cout << endl;
    }
}
void pattern10(int n) {
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int a = 0; a < n; a++) {
        for (int b = 0; b <= n - a - 1; b++) {
            cout << "* ";
        }
        cout << endl;
    }
    
}
void pattern11(int n) {
    for (int i = 0; i < n; i++) {
        int start = 1;
        if(i%2==0) start = 1;
        else start = 0;
        for (int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void pattern12(int n) {
    int space = 2*(n-1);
    for(int i=1; i<=n; i++) {
        // numbers
        for(int j=1; j<=i; j++) {
            cout << j;
        }
        // spaces
        for (int j = 1; j <= space; j++){
            cout << " ";
        }
        // numbers
        for(int j=i; j>=1; j--) {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void pattern13(int n) {
    int number = 1;
    for(int i = 1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            cout << number << " ";
            number++;
        }
        cout << endl;
    }
}
void pattern14(int n) {
    for(int i=0; i<n; i++) {
        for(char j='A'; j<='A' + i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}
void pattern15(int n) {
    for(int i=0; i<=n; i++) {
        // i=2 --> n-2-1 = 
        for(char j='A'; j<= 'A' + (n-i-1); j++) {
            cout << j << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    // pattern1(n);
    // cout << endl;
    // pattern2(n);
    // cout << endl;
    // pattern3(n);
    // cout << endl;
    // pattern4(n);
    // cout << endl;
    // pattern5(n);
    // cout << endl;
    // pattern6(n);
    // cout << endl;
    // pattern7(n);
    // cout << endl;
    // pattern8(n);
    // cout << endl;
    // pattern9(n);
    // cout << endl;
    // pattern10(n);
    // cout << endl;
    // pattern11(n);
    // cout << endl;
    // pattern12(n);
    // cout << endl;
    // pattern13(n);
    // cout << endl;
    pattern14(n);
    pattern15(n);
    return 0;
}