#include <bits/stdc++.h>
using namespace std;

class shop{
    // By default it is always private
    int itemID[100];
    int itemPrice[100];
    int counter;
    public:
        void initCounter(void) {counter=0;}
        void displayPrice(void);
        void setPrice(void);
};

void shop:: setPrice(void){
    cout<<"Enter the ID of your item "<<counter+1<<endl;
    cin>>itemID[counter];
    cout<<"Enter the price of your item: "<<endl;
    cin>>itemPrice[counter];
    counter++;
}

void shop:: displayPrice(void){
    for (int i=0; i<counter; i++){
        cout<<"ID: "<<itemID[i]<<" Price: "<<itemPrice[i]<<endl;
    }
}
int main() {
    shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}   