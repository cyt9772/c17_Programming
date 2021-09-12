#include <iostream>

using namespace std;

int func() {return 42;}

int main(){
    int (&Func)()=func;
    int (*f)()=func;

    int x=Func();
    cout<<"x  = "<<x<<" , "<<f()<<endl;
    
    return 0;
}