#include <iostream>
#include <cmath>
using namespace std;

//n=50
int prime(int n) {
    for(int i=2;i<(int)sqrt(n); i++){
        if(n % i == 0) return 0; // not a prime number
    }
    return 1; // it is a prime number
}

int main(){
    int num;
    cout<<"Enter the number to be checeked: ";
    cin>>num;

    if(prime(num)==0){
        cout<<endl<<"Not Prime no"<<endl;
    }
    else{
        cout<<endl<<"Prime";
    }

}