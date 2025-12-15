#include<iostream>
using namespace std;
int SUM = 0;
void input(int news[][5]){
   for (int i = 0; i < 60; i++){
        for (int j = 0; j < 5; j++){
           cin>> news[i][j];
           SUM += news[i][j];
        }
    }
}
int main(){
    int studentsMarks[60][5];
    int sum = 0;
    input(studentsMarks);
    return 0;
}