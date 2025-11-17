#include<iostream>
using namespace std;
int main(){
    int starting_number, daily_increase,days;
    cout << "starting number of organisms : ";
    cin>>starting_number;
    cout << "their average daily population increase (as a percentage) : ";
    cin>>daily_increase;
    cout << "the number of days they will multiply. : ";
    cin >> days;
    for(int i = 1; i <= days; i++){
       
    float percentage=(starting_number/100.0)*daily_increase;
    starting_number=starting_number+percentage;
    cout<<"the population for day "<<i<<" is: "<<starting_number<<endl; 
    }
    return 0;
}
