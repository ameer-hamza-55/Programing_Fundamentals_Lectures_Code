#include<iostream>
using namespace std;
int main(){
    float speed, hours, distance;
    do {
        cout << "What is the speed of the vehicle in mph? ";
        cin >> speed;
        cout << "How many hours has it traveled? ";
        cin >> hours;
    }while (speed < 0 || hours < 1);
    
    cout<<" hours\t\t distance"<<endl;
    cout<<"------------------------"<<endl;
    for(int i = 1; i <= hours; i++){
        distance = speed * i;
        
        
        cout<<i <<"\t\t "<<distance<<endl;
    }
    return 0;
}