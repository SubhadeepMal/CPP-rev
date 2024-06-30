#include <iostream>
using namespace std;

int glob=7;

void  func() {
    cout<<"glob: "<<glob;
}

int main(){
    int a=4;
    float b=5.2;
    cout<<"Value of gloabal variable is " <<glob<<endl;
    cout<<"Address of global variable is "<<&glob<<endl;
    int glob=8;
    cout<<"\nNew value of global variable is "<<glob<<endl;
    cout<<"Address of new global variable is "<<&glob<<endl;

    func();

    // cout<<"The value of 'a' is "<<a<<endl;
    // cout<<"The value of 'b' is "<<b<<endl;
    // char c='d';
    // cout<<"The value of 'c' is "<<c<<endl;
    //return 0;
}