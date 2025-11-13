#include<iostream>
using namespace std;
float add(int a, int b){
    float result =a+b;
    return result;
}
int subtract(int , int );
double multiply(double a, double b){
    double result = a*b;
    return result;

}
int main(){
    float number1, number2;
    cout << "Enter first integer: ";
    cin >> number1;
    cout << "Enter second integer: ";
    cin >> number2;
    cout<<"press 1 for addition"<<endl;
    cout<<"press 2 for subtraction"<<endl;
    cout<<"press 3 for multiplication"<<endl;
    int choice;
    cout<<"Enter your choice: ";
    cin>> choice;
   
    switch(choice){
        case 1:
            int addition;
            addition = add(number1, number2);
            cout<<"the addition is: "<< addition << endl;
            break;
        case 2:
            int sub;
            sub=subtract(number1, number2);
            cout<<"the subtraction is: "<< sub << endl;
            break;
        case 3:
            int mult;
            mult= multiply(number1, number2);
            cout<<"the multiplication is: "<< mult << endl;
            break;
        default:
            cout<<"invalid choice"<<endl;
    }
    cout << "addition is " << add(5,8);
    return 0;
}
int subtract(int a, int b){
    int result =a-b;
    return result;
}