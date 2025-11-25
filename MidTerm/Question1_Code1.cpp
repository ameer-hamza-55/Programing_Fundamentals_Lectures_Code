#include<iostream>
using namespace std;
int main(){
    int t=2, s=3, r=5, n=4; 
    cout<<s%5<<endl;
    cout<<t - s % 5 + r / t<<endl; 
    cout<<static_cast<double>(t)/n<<" " <<t/n<<endl; 
    cout<<r + n - s % n * t<<endl; 

}
