
#include<iostream>
#include<string>
using namespace std;
double getSales(string divisionName){
    double sales;
    cout << "Enter the quarterly sales for the " << divisionName << " division: ";
    cin >> sales;
    while(sales < 0){
        cout << "Sales figure cannot be negative. Please enter a valid amount: ";
        cin >> sales;
    }
    return sales;
    
}
void findHighest(double sales1, double sales2, double sales3, double sales4){
    double highest = sales1;
    string division = "Northeast";
    if(sales2 > highest){
        highest = sales2;
        division = "Southeast";
    }
    if(sales3 > highest){
        highest = sales3;
        division = "Northwest";
    }
    if(sales4 > highest){
        highest = sales4;
        division = "Southwest";
    }
    cout << "The highest grossing division is the " << division << " division with sales of $" << highest << endl;
}

int main(){
    string division1 = "Northeast";
    string division2 = "Southeast";
    string division3 = "Northwest";
    string division4 = "Southwest";
    double sales1 = getSales(division1);
    double sales2 = getSales(division2);
    double sales3 = getSales(division3);
    double sales4 = getSales(division4);
    findHighest(sales1, sales2, sales3, sales4);


    return 0;
}