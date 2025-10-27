#include<iostream>
using namespace std;
int main(){
    int a = 5;
    int b = 7;
    int result = a < b;
    cout << "please enter your marks = ";
    cin >> result;
 
    if(result>=50 && result<=55){
        cout << "D";
    }else if(result>55 && result <=60){
        cout << "D+";
    }else if(result >60 && result <=65){
        cout << "C";
    }else if (result >65 && result <= 70){
        cout << "C+";
    }else if(result >70 && result <=75){
        cout << "B";
    }else if(result >75 && result <=80){
        cout << "B+";
    }else if(result >80 && result <=100){
        cout << "A";
    }else{
        cout << "F";
    }
       
    cout << "good luck";    

    return 0;
}