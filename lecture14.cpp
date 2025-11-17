#include<iostream>
using namespace std;
int pi;
void add(int b, int c,int a=6){
    int result = a * b;
    cout << a<<endl;
    
    cout << result << endl;
    cout << pi;
}
void input(int &l,int &w){
    static int track;
    cout << "please enter length";
    cin >> l;
    cout << "please enter weidth : ";
    cin >> w;
    track++;
    cout << track;
}
void input(int &l){
    cout << "please enter length";
    cin >> l;
    exit(0);
}
int main(){
    
    int length = 70;
    int weidht = 20;
    input(length, weidht);
    input(length, weidht);
    input(length);
    add(weidht,60,6);
   

    return 0;
}

