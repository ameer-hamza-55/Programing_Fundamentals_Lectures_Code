#include<iostream>
using namespace std;
void input(const float news[]){
    cout << "please enter elements of array ";
    for (int i = 0; i < 5;i++){
        
    }
}
int main(){
    const int SIZE = 3;
    float fistarray[5];
    input(fistarray);

    int noOfStudents[]={6,879,7,90};
    int sum = 0;
    int count = 0;

    for (int &j: noOfStudents){
        cout << " number on " << count << " index is : ";
        cout << j<<endl;
        count++;
        j = 10;
        cout << j<<endl;

        sum += j;
    }
    for (int k: noOfStudents){
        cout << k<<endl;
    }
        for (int k = 0; k <= 3; k++)
        {
            cout << "number on " << k << " index is : ";
            cout << k << endl;
            sum += noOfStudents[k] + 3;
        }
    int noofemploye[] = {6,879,7,90};
    for (int i = 0; i < 3;i++){
        if(noOfStudents[i]==noofemploye[i])
            cout << "ok";
    }
    
    return 0;
}
