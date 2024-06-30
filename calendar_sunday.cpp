#include <bits/stdc++.h>
using namespace std;

int main(){
    vector <string> v1={"mon","tue","wed","thr","fri","sat","sun"};
    string d;
    cin>>d;

    int n;
    cin>>n;
    int m=0;
    for (int i=0;i<v1.size();i++) {
        if(d==v1[i]){
            m=i;
        break;
        }
    }
    m=7-m;
    int c=0;
    for(int k=m;k<n+1;k+=7){
        c++;
    }
    cout<<"No of Sundays: "<<c;

}