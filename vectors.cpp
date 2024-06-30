#include <bits/stdc++.h>
using namespace std;

void explainvector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);

    vector<pair<int,int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(3,4);
    
    for(auto i:vec){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<*v.begin()<<" ";
    cout<<*(v.end()-1)<<endl;
    
    v.erase(v.begin());
    
    cout<<*v.begin()<<" ";
    cout<<*(v.end()-1);


}

int main() {
    explainvector();
return 0;
}