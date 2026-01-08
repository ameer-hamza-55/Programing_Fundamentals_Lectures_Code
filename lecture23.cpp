#include<iostream>
#include<fstream>
using namespace std;
fstream file;
int main(){
    
    file.open("data.txt", ios::in | ios::out | ios::app);
    
    int x;
    string yourname;
    cout<<"how manay students in your class: ";
    cin>>x;
    for(int i=0; i<x; i++){
        cout<<"Enter your name of student "<<(i+1)<<": ";
        cin>>yourname;
        file<<yourname<<endl;
    }
    return 0;
}
