#include<iostream>
using namespace std;
int x;
double arry[5];
int main(){
    int x1, x2, x3,students;
    cout << "how many students in your class : ";
    cin >> students;
    double marks[students];
    cout << marks[2];
    cout << marks[0];
    cout << marks[0] + 3;
    string names[10]={"ali","fatima","srar","atif"};
    for (int i = 0; i < 10; i++){
        cout << names[i];
    }
    for (int j = 0; j < students;j++){
        cout << "please enter marks of student" <<j+1;
        cin >> marks[j];
    }
   
    for (int j = 0; j < students;j++){
        cout << "student marks " <<j+1 <<" ";
        cout<< marks[j];
    }

        return 0;
}