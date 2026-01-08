#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream myfile;
    myfile.open("data.txt", ios::in | ios::out | ios::app);
    //check if data is in the file or not
    string first;
    getline(myfile, first);
    cout<<first<<endl;
    while(getline(myfile, first)){
        cout<<first<<endl;
        
    }
}