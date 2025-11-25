/*
Write a program for the equivalent of a four-function calculator. The program should ask the user to enter a number, an operator, and another number. (Use floating point.) It should then carry out the specified arithmetical operation: adding, subtracting, multiplying, or dividing the two numbers. Use a switch statement to select the operation. Finally, display the result. 
When it finishes the calculation, the program should ask whether the user wants to do another calculation. The response can be ‘y’ or ‘n’. Some sample interaction with the program might look like this: 
Sample Output: 
Enter first number, operator, second number: 10 / 3 
Answer = 3.333333 
Do another (y/n)? y 
Enter first number, operator, second number: 12 + 100 5 
Answer = 112 
Do another (y/n)? n 

*/
#include <iostream>
using namespace std;
int main() {
    char choice;
    do {
        double num1, num2, result;
        char op;
        cout << "Enter first number, operator, second number: ";
        cin >> num1 >> op >> num2;

        switch (op) {
            case '+':
                result = num1 + num2;
                cout << "Answer = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Answer = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Answer = " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Answer = " << result << endl;
                } else {
                    cout << "Error: Division by zero!" << endl;
                }
                break;
            default:
                cout << "Error: Invalid operator!" << endl;
        }

        cout << "Do another (y/n)? ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}