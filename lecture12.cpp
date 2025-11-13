#include<iostream>
#include<cmath>
using namespace std;

void display(){
    cout<<"press 1 to add three numbers"<<endl;
    cout<<"press 2 to subtract three numbers"<<endl;
    cout<<"press 3 to multiply three numbers"<<endl;

}

bool add(){
    int number1,number2, number3;
    bool result;
    cout<<"please enter number 1: ";
    cin>> number1;
    cout<<"please enter number 2: ";
    cin>> number2;
    cout<<"please enter number 3: ";
    cin>> number3;
    
    result= number1 + number2+ number3;
    return result;
}
int main(){
    display();
    int y = 2 + add();
    cout<<"the sum is: "<< y << endl;
    display();


    return 0;
}