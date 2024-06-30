#include <bits/stdc++.h>
using namespace std;

vector<int> dec_bin(int n){
    vector<int> v;

    int i=0;
    while (n>0){
        v.push_back(n%2);
        n=n/2;
        i++;
    }
    //cout<<i;
    // for (int j = i+1; j <v.size(); j++) {
    //     v.erase(v.begin() + j);
    // }
    //cout<<endl;
    for(auto x:v)cout<<x;
    cout<<endl;
    return v;   
}

int bin_dec(vector<int> v){
    int d;
    for(int i=v.size()-1;i>=0;i--){
        d+=v[i]*pow(2,v.size()-1-i);
    }
    return d;
}

int main(){
    int n;
    cin>>n;

    vector<int> result=dec_bin(n);
    //vector<int> dec;
    reverse(result.begin(), result.end());
    // Printing the binary representation of the input number
    for (int i = 0; i<result.size(); i++) {
    	cout<<result[i];
        if(result[i]==0){
            result[i]=1;
        }
        else{
            result[i]=0;
        }
    }
    cout<<endl<<"After Toggling: ";
    for(int j=0;j<result.size();j++){
        cout<<result[j];
    }
    cout<<endl;
    int ans=bin_dec(result);
    cout<<ans;
}