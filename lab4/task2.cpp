#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int pricOfClassA=15, pricOfClassB=12, pricOfClassC=9;
    int numberOfClassA, numberOfClassB, numberOfClassC;
    float result;
    cout<<"Enter the number of tickets sold for Class A: ";
    cin>>numberOfClassA;
    cout<<"Enter the number of tickets sold for Class B: ";
    cin>>numberOfClassB;
    cout<<"Enter the number of tickets sold for Class C: ";
    cin>>numberOfClassC;
    result = (numberOfClassA * pricOfClassA) + (numberOfClassB * pricOfClassB) + (numberOfClassC * pricOfClassC);
    cout<<"The total amount of income generated from ticket sales is: $"<<fixed<<setprecision(2)<<showpoint<<result<<endl;
    return 0;
}