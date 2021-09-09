#include <iostream>

using namespace std;

struct Something{
    static int s_value;
    static int getSValue(){return s_value;}

    int value;
    int getValue(){return value;}
};

int Something::s_value = 1;

int main(){
    cout<<Something::getSValue()<<endl;

    Something s = {100};

    cout<<s.getSValue()<<" , "<<s.getValue()<<endl;
}