#include<iostream>
using namespace std;
int main(){
    int yournumber;
    cout<<"press 1 for average "<<endl;
    cout<<"press 2 for sum "<<endl;
    cout<<"press 3 for product "<<endl;
    cout<<"press 4 for difference "<<endl;
    cin>> yournumber;
    if (!(yournumber==50)){
        cout<<"your number is valid"<<endl;
    }else{
        cout<<"your number is invalid"<<endl;
    }
    char grade;
    char test='A';
    if(grade > 'A'){
        cout<<"your grade is not A"<<endl;
    }
    string yourname="Ali";
    string testname="alis";
    
    if (yournumber==50){
        grade = 'd';
    }
    else {
        grade = 'F';
    }
    yournumber==50 ? grade='D' : yournumber==61?grade='C': grade='A';
    return 0;
}