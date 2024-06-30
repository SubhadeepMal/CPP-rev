#include <bits/stdc++.h>
using namespace std;

int factos(int n){
    if (n<=1){
        return 1;
    }
    return n*factos( n-1);
}

int main(){
    int n=1;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<endl<<"Factorial: "<<factos(n);

}