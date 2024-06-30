#include <bits/stdc++.h>
using namespace std;

class employee{
    private:
        int a,b,c;
    public:
        int d,e;
        void putdata(int x,int y,int z);
        void getdata(){
            cout<<"The value of a is: "<<a<<endl;
            cout<<"The value of b is: "<<b<<endl;
            cout<<"The value of c is: "<<c<<endl;
            cout<<"The value of d is: "<<d<<endl;
            cout<<"The value of e is: "<<e<<endl;
        }
};

void employee :: putdata(int x, int y, int z){
    a=x;
    b=y;
    c=z;
}

int main() {
    employee e1;
    e1.d=7;
    e1.e=8;
    e1.putdata(1,2,3);
    e1.getdata();
    return 0;
}