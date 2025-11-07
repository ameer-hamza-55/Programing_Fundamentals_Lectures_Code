#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "please enter number = ";
    cin >> num;
    if(num<0){
        cout << "your abs number is = " << -1 * num << endl;
    }
    return 0;
}