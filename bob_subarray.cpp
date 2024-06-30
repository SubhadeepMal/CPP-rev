#include <bits/stdc++.h>
using namespace std;


int main() {
    int n,k;
    cout<<"n: ";
    cin>>n;
    cout<<"k: ";
    cin>>k;
    int m;
    vector<int> vec;
    for (int i=0; i<n;i++){
        cin>>m;
        vec.push_back(m);
    }
    
    int sum=0,c=0;
    int i=0,j=0;
    while(j<n){
        sum+=vec[j];
        while(sum>=k){
            sum-=vec[i];
            i++;
        }
        c = max(c, j - i + 1);
        j++;
    }
    cout<<c;
}