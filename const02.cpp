#include <iostream>

using namespace std;

int calcConstant(){
    int foo=0;
    cout<<"초기값을 입력하시기 바랍니다.";
    cin>>foo;
    return foo;
}

int main(){
    const int maxarray=calcConstant();
    char store[maxarray];

    cout<<"문자열을 입력하십시오";
    cin>>store;

    cout<<maxarray<<" , "<< store<<endl;
    return 0;
}