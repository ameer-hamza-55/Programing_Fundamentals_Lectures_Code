#include<iostream>
using namespace std;
int main(){
    float volumofgasoline, result, gallons;
    cout<<"Enter the volume of gasoline in liters: ";
    cin>>volumofgasoline;
    gallons = volumofgasoline / 4.546;
    result = gallons * 3.58;
    cout<<"The volume of gasoline in gallons is: "<<gallons<<endl;
    cout<<"The cost of gasoline is: $"<<result<<endl;
    return 0;
}