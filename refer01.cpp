#include <iostream>

using namespace std;

string id;
string& GetID(){
    return id;
}

void square(int x, int& result){
    result=x*x;
}

int main(){
    int x;
    square(10,x);
    cout<<"x= "<<x<<endl;
    string& s=GetID();
    s="Hello World";
    cout<<"id = "<<id<<endl;    
    return 0;
}