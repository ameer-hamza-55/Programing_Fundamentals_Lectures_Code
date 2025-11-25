/*
A school wants to display an X-shaped star pattern on a digital notice board. 
Write a C++ program that takes an integer n (n ≥ 3) and 
prints an X-shaped pattern using * on an n × n grid. 
You must use nested for loops and print one character per iteration.
Print * only on the two diagonals (row == column and row + column == n + 1) 
and print spaces elsewhere.
*/
#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter an integer n (n >= 3): ";
    cin >> n;

    if (n < 3) {
        cout << "Error: n must be at least 3." << endl;
        return 1;
    }

    for (int row = 1; row <= n; ++row) {
        for (int col = 1; col <= n; ++col) {
            if (col == row || col == (n - row + 1)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}