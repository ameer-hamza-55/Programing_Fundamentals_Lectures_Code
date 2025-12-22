#include<iostream>
using namespace std;
int main(){
    int marks [10]={85, 90, 40, 92, 88, 76, 95, 40, 84, 91};
    int postion = 0;
    int count = 0;
    bool found = false;
    for (int i = 0; i < 10; i++){
        if (marks[i] == 40){
            postion = i;
            found = true;
            cout<<"student found at index: "<<i<<endl;
            count++;
        }
    }
    cout<<"number of students who got 40 marks: "<<count<<endl;
    if (found){
        cout<<"first position of student who got 40 marks: "<<postion<<endl;
    } else {
        cout<<"no student got 40 marks"<<endl;
    }
    return 0;
}