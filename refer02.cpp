#include <iostream>
#include <string>

using namespace std;

#include 

void square(int x, int& result){
    result=x*x;
}

int main(){
    int x;
    square(10,x);
    cout<<"x= "<<x<<endl;
    //string& s=GetID();
    string s="Hello World";
    cout<<"s = "<<s<<endl;    
    return 0;
}