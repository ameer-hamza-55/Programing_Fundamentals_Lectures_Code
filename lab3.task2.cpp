/*
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town,
and 28.9 miles per gallon when driven on the highway. Write a program that calculates
and displays the distance the car can travel on one tank of gas when driven in town
and when driven on the highway.
Hint: The following formula can be used to calculate the distance:
Distance 5 Number of Gallons 3 Average Miles per Gallon
*/
#include<iostream>
using namespace std;
int main(){
    int noOfGallons = 20;
    float gallonsintown = 23.5;
    float gallonInHigway = 28.9;
    cout << "diatence covered in town = " << noOfGallons * gallonsintown << endl;
    cout << " distance covered in highway = " << noOfGallons * gallonInHigway << endl;
    return 0;
}