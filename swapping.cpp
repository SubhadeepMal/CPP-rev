#include <bits/stdc++.h>
using namespace std;

void swapp(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

void swap_by_memory(int* x, int* y) { 
    int temp = *x;  
    *x = *y;    
    *y = temp;    
}


int main() {
    int x=3,y=5;

    cout<<x<<" "<<y<<endl;

    swapp(x,y);
    cout<<x<<" "<<y<<endl;

    swap_by_memory(&x,&y);
    cout<<x<<" "<<y<<endl;

    //using swap inbuilt function:
    swap(x,y);
    cout<<x<<" "<<y;
	return 0;
}