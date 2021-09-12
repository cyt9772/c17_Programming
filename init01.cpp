#include <iostream>
#include <cstdio>

using namespace std;

int main(){
    int a=10;
    cout<<"a: "<<a<<endl;

    int b(20);
    cout<<"b: "<<b<<endl;

    int c{30};
    cout<<"c: "<<c<<endl;

    int d=int(40);
    cout<<"d: "<<d<<endl;
    
    int e();
    if(e) cout<<"e: "<<e<<endl;

    int f=int();
    cout<<"f: "<<f<<endl;

    int g={50};
    cout<<"g: "<<g<<endl;

    int *h=new int;
    cout<<"*h: "<<*h<<endl;

    int *i=new int();
    cout<<"*i: "<<*i<<endl;

    int *j=new int(60);
    cout<<"*j: "<<*j<<endl;

    bool ok=true;
    cout<<boolalpha<<ok<<endl;
    cout<<noboolalpha<<ok<<endl;

    return 0;
}