#include <iostream>
using namespace std;


void symmetry(int n) {
    // Write your code here.
    for(int i=0; i<n;i++){
        for(int j =0; j<=i;j++){
            cout<<"* ";
        }
        for(int k=(2*n);k>3*i;k--){
            cout<<" ";
        }
        for(int l=0;l<=i;l++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int i=0; i<n-1;i++){
        for(int j=n-1;j>=i+1;j--){
            cout<<"* ";
        }
        for(int k=(3*(i+1));k>0;k--){
            cout<<" ";
        }
        for(int l=n-1;l>i;l--){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void getNumberPattern(int n) {
    // Write your code here.
    for (int i = n; i > 0; i--) {
        if(i<n){
            for(int k=n;k>i;k--){
                cout<<k;
            }
        }
        for(int j=2*i-1; j>=1;j--){
            cout<<i;
        }
        if(i<n){
            for(int l=i+1;l<=n;l++){
                cout<<l;
            }
        }
        cout<<endl;
    }
    for(int i=2;i<=n;i++){
        if(i<n){
            for(int k=n;k>i;k--){
                cout<<k;
            }
        }
        for(int j=1;j<(2*i);j++){
            cout<<i;
        }
        if(i<n){
            for(int l=i+1;l<=n;l++){
                cout<<l;
            }
        }
        cout<<endl;
    }
}

int main(){
    int n = 3;
    symmetry(n);
    cout<<endl;
    int k=4;
    getNumberPattern(k);
}