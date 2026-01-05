#include<iostream>
using namespace std;
int main(){
    int *ptr;

    ptr = nullptr; // Initializing pointer to nullptr
    ptr = new int[5]; // Allocating memory for an array of 5 integers
    for(int i=0; i<5; i++){
        cout<<"Enter value for element "<<i<<": ";
        cin>>*(ptr+i);
    }
    for (int i=0; i<5; i++){
        cout<<"Element "<<i<<" is: "<<ptr[i]<<endl;
        cout<<"Element "<<i<<" is: "<<*(ptr+i)<<endl;
    }
    cout<<ptr<<endl; // Address of the first element
    delete [] ptr; // Freeing allocated memory
    cout<<"After deletion:"<<endl;
    cout<<ptr<<endl; // Address still remains the same
    for (int i=0; i<5; i++){
        cout<<"Element "<<i<<" after deletion is: "<<ptr[i]<<endl; // Undefined behavior
    }
}
