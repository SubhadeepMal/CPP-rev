#include <bits/stdc++.h>
using namespace std;

int main(){
    //Reading a line of string
    string s;
    getline(cin,s);
    stringstream ss;
    vector<int> v;
    ss << s;
    int a;
    while(ss >> a)
    {
        v.push_back(a);
    }
 
    cout << v.size() << endl << endl;
 
    for(int i = 0; i < v.size(); i++)
        cout << v[i]<<" ";
 
 
    return 0;
}