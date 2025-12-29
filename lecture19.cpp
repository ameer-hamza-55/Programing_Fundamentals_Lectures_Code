#include<iostream>
using namespace std;
int main(){
    int* a;
    int b = 30;
    cout << &b<<endl;
    a=&b;
    cout << a<<endl;
    int marks[10]={6,4,6,43,65,345};
    cout << marks<<endl;
    cout << a[0] << endl;

    cout << *a << endl;
   
    

    return 0;
}