#include <iostream>
using namespace std;

int add(int a, int b)
{
    int summ;
    summ = a + b;
    return summ;
}

int main()
{
    int age = 10;
    // while (age <= 18)
    // {
    //     cout << "The age is " << age << endl;
    //     age++;
    // }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout<<"The age is "<<i<<endl;
    // }

    int a, b;
    cout << "Enter 1st number: " << endl;
    cin >> a;

    cout << "Enter 2nd number: " << endl;
    cin >> b;

    cout <<"The sum of a and b is: " << add(a, b);

    return 0;
}