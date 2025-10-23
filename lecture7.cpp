#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string yourName;
    cout << "Enter your name: ";
    getline(cin, yourName);

    cout << "your name is: " << yourName << '\n';
    
    cout << "sizeof(string object): " << sizeof(yourName) << " bytes\n";
    cout<< "length of your name: " << yourName.length() << " characters\n";
    cout<<"sqrt of 25"<< " is " << sqrt(25) << '\n';
    return 0;
}