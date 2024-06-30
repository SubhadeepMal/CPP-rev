#include <bits/stdc++.h>
using namespace std;

int sum(int a, int b){
    cout<<"2 arguments: "<<endl;
    return a+b;
}

int sum(int a, int b, int c){
    cout<<"3 arguments: "<<endl;
    return a+b+c;
}

int main() {
    cout<<"The sum of 3 and 5 is: "<<sum(3,5)<<endl;
    cout<<"The sum of 3, 4 and 5 is: "<<sum(3,4,5)<<endl;
    return 0;
}