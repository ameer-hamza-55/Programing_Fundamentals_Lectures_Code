#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int a = 0, b = 1, nextTerm = 0, count = 1;
    if (n == 1)
    {
        cout << a << endl;
    }
    else if (n > 1)
    {
        cout << a << " " << b << " ";
        while (count < n - 1)
        {
            nextTerm = a + b;
            cout << nextTerm << " ";
            a = b;
            b = nextTerm;
            count++;
        }
        cout << endl;
    }
    else
    {
        cout << "Invalid input" << endl;
    }
    return 0;
}
