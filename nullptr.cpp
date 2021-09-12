#include <iostream>
#include <cstddef>

using namespace std;

void f(int *pi){
    cout<<"정수를 가리킨다."<<endl;
}
void f(double *pd){
    cout<<"실수를 가리킨다."<<endl;
}

void f(nullptr_t nullp){
    cout<<"null포인트이다."<<endl;
}

int main(){
    int *pi=new int();
    double *pd=new double();

    f(pi);
    f(pd);
    f(nullptr);

    delete pi;
    delete pd;
}