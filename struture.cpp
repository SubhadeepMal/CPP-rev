#include <iostream>
using namespace std;

typedef struct employee{
    int eid;
    char favchar;
    float salary;
}ep;


typedef union money
{
    int rice;
    char car;
    float pounds;
}money;

int main() {
    // ep One;
    // One.eid = 101;
    // One.favchar = 'A';
    // One.salary = 900000;
    // cout << "Employee ID: "<<One.eid<<endl;
    // cout << "Favorite Character: "<<One.favchar<<endl;
    // cout << "Salary: "<<One.salary;

    money Two;
    Two.rice=500;
    cout << "Number of Rice: "<<Two.rice<<endl;
    
    Two.car= 'B';
    cout<< "Car Brand: "<<Two.car<<endl;
    return 0;
}