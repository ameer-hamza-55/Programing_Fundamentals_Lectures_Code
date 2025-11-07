#include<iostream>
using namespace std;
int main(){
    int x = 0;
    while (x>0){
        cout<<"your name is john"<<endl;
        x++;
    }
    int number1,number2;
    cout<<"please enter number 1: ";
    cin>> number1;
    while(number1<0){
        cout<<"number is negative"<<endl;
        cout<<"please enter a positive number: ";
        cin>> number1;
    }
    int j = 1, sum = 0;
    
    while(j<=number1){
        sum=sum+j;
        j++;
    }
    do {
        cout << "please enter second number : ";
        cin >> number2;
    } while (number2<=0);


    for (int i=1; i<=10;i++){
        cout<<number1<<" * "<<i<<" = "<<number1*i<<endl;
        
    }
    for (int m = 0; m < 24;m++){
        
        for (int l = 0; l <= 59; l++)
        {
        for (int k = 0; k <= 59; k++)
        {
            cout <<m<<" : "<<l<<" : "<< k << endl;
        }
        }

    }
        
        return 0;
}