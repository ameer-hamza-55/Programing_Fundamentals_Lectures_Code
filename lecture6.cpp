#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    char mycahrvariable = 'A';
    short int a = 5;
    float b = 6.968789;
    cout << a * mycahrvariable<<endl;
    cout << a * b << endl;
    float result = a / b;
    cout << result << endl;
    short int c = 32770;
    cout << c << endl;
    int result2= static_cast<int>(6.7)/ 6;
    int d, e, f, g;
    f = e = f = g = 5;
    e = e + 10;
    e += 10;
    e /= 5;
    cout<<left << setw(5) << a << setw(5) << b << c << endl;
    cout <<fixed<<setprecision(2) << b;
    return 0;
}