// Your First C++ Program

#include <iostream>
using namespace std;

int main() {
    // cout<<"Hello World!"<<endl;
    // cout<<"New line";

    // int a=7;
    // cout<<endl<<"Value of a is: "<<a<<endl;
    
    int b;
    cout<<"Enter first number: ";
    cin>>b;
    int c;
    cout<<endl<<"Enter second number: ";
    cin>>c;

    cout<<endl<<(float) b/c<<endl;

    if(b==c){
        cout<<endl<<"1st and 2nd number is:"<<b<<" & "<<c;
    }
    else{
        cout<<"NOPE!";
    }
    return 0;
}
