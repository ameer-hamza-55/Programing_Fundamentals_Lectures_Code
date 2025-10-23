#include<iostream>
using namespace std;
int main(){
    int plycontainIntialwater = 3;
    int after6hourswater = 15;
    int time = 6;
    int totalrain= after6hourswater - plycontainIntialwater;
    int average = totalrain / time;
    int totalrainin24hours = average * 24;
    cout<<"total rain in 6 hours = " << totalrain << " L\n averag" << endl;
    cout<<"average rain in 1 hour = " << average << " L" << endl;
    cout<<"Total rain in 24 hours = " << totalrainin24hours << " L" << endl;
    return 0;
}