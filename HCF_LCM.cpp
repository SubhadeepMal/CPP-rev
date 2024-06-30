#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cout<<"Enter the 1st no: ";
    cin>>a;
    cout<<endl<<"Enter the 2nd no: ";
    cin>>b;

    cout<<endl<<"GCD: "<<gcd(a,b)<<endl;
    cout<<"LCM: "<<a*b/gcd(a,b);
    
    return 0;
}
