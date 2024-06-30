#include <iostream>
using namespace std;

int main(){
    string name="Johnathan";
    cout<<"Name: "<<name<<endl;
    cout<<"Length of the Name: "<<name.length()<<endl;
    
    // Accessing individual characters in a string using indexing
    char firstChar=name[0];  //Accessing the first character of the string
    cout<<"First Character: "<<firstChar<<endl;

    //Printing the substring
    cout<<"Substring: "<<name.substr(1,5)<<endl;
}