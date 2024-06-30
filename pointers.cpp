#include <iostream>
using namespace std;

int main(){
    int a=34;
    int *ptra;
    ptra= &a;
    cout<<"Address of a: "<< ptra<<endl;
    cout<<"Address of a: "<< &a<<endl;
    cout<<"Value of a: "<< *ptra<<endl;
    cout<<"Value of a: "<< a<<endl;

}
