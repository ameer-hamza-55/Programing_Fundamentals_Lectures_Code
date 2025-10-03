#include<iostream>
using namespace std;
int main(){
    int hours, payperhours, sallry;
    cout << "how many hours you worked";
    cin >> hours;
    cout << " how many pay per hour";
    cin >> payperhours;
    sallry = hours * payperhours;
    cout << "total sallry = " << sallry;
    return 0;
}