#include<iostream>
using namespace std;
int main(){
    int number1, number2;
    cout<<"please enter number 1: ";
    cin>> number1;
    cout<<"please enter number 2: ";
    cin>> number2;
    cout<<"press 1 for maximum "<<endl;
    cout<<"press 2 for minimum "<<endl;
    cout<<"press 3 for addition "<<endl;
    cout<<"press 4 for subtraction "<<endl;
    cout<<"press 5 for multiplication "<<endl;
    cout<<"press 6 for division "<<endl;
    int choice;
    cin>> choice;
    if (choice == 1) {
        cout << "Maximum is: " << (number1 > number2 ? number1 : number2) << endl;
    } else if (choice == 2) {
        cout << "Minimum is: " << (number1 < number2 ? number1 : number2) << endl;
    } else if (choice == 3) {
        cout << "Addition is: " << (number1 + number2) << endl;
    } else if (choice == 4) {
        cout << "Subtraction is: " << (number1 - number2) << endl;
    } else if (choice == 5) {
        cout << "Multiplication is: " << (number1 * number2) << endl;
    } else if (choice == 6) {
        if (number2 != 0) {
            cout << "Division is: " << (number1 / number2) << endl;
        } else {
            cout << "Error: Division by zero!" << endl;
        }
    } else {
        cout << "Invalid choice!" << endl;
    }
    switch(choice) {
        case 1:
            cout << "Maximum is: " << (number1 > number2 ? number1 : number2) << endl;
            break;
        case 2:
            cout << "Minimum is: " << (number1 < number2 ? number1 : number2) << endl;
            
        case 3:
            cout << "Addition is: " << (number1 + number2) << endl;
            break;
        case 4:
            cout << "Subtraction is: " << (number1 - number2) << endl;
           
        case 5:
            cout << "Multiplication is: " << (number1 * number2) << endl;
            
        case 6:
            if (number2 != 0) {
                cout << "Division is: " << (number1 / number2) << endl;
            } else {
                cout << "Error: Division by zero!" << endl;
            }
           
        default:
            cout << "Invalid choice!" << endl;
    
    cout<<"Using ternary operator for maximum: ";
    }
    
    cout<<choice++;
    cout << --choice;
    int x = 1;
    while (x<=50){
        cout<<x<<endl;
    }
    for(; x<=50; x++){
        cout<<x<<endl;
        
    }
    return 0;
}