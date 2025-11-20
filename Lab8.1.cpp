#include<iostream>
using namespace std;
float calculateRetailPrice(float wholesalePrice, float markupPercentage){
     float retailPrice = wholesalePrice + (wholesalePrice * markupPercentage / 100);
     return retailPrice; 
}
   
int main(){
    float wholesalePrice, markup;
    cout << "Enter the wholesale price: ";
    cin >> wholesalePrice;
    while(wholesalePrice < 0){
        cout << "Wholesale price cannot be negative. Please enter a valid price: ";
        cin >> wholesalePrice;
    }
    cout<<"Enter the markup percentage: ";
    cin >> markup;
    while(markup < 0){
        cout << "Markup percentage cannot be negative. Please enter a valid percentage: ";
        cin >> markup;
    }
    float result=calculateRetailPrice(wholesalePrice, markup);
    cout << "The retail price is: " << result << endl;
   
    
    return 0;
}