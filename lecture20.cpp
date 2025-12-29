#include<iostream>
using namespace std;
int *add(int *a, int *b){
    int *c=new int;
    *c = *a + *b;
    return c;
}
int main(){
    int *a;
    cout << a<<endl; // Uninitialized pointer, may print garbage value
    a=nullptr; // Initializing pointer to nullptr
    cout << a<<endl; // Should print 0 or nullptr
    a=new int; // Allocating memory for an integer
    *a = 56;
    cout << *a << endl; // Should print 56
    delete a; // Freeing allocated memory
    a=nullptr; // Setting pointer to nullptr after deletion
    a = new int; // Allocating memory for a double
    *a = 34.5;
    cout << *a << endl; // Should print 34.5
    delete a; // Freeing allocated memory
    a=nullptr; // Setting pointer to nullptr after deletion
    a=new int[10]; // Allocating memory for an array of 10 integers
    a[0]=45;
    *a=45;
    *(a+1)=55;

    int *c=add(a, a+1); // Calling add function
    cout << *c << endl; // Should print 100
    delete c; // Freeing allocated memory
    c=nullptr; // Setting pointer to nullptr after deletion
    return 0;
}