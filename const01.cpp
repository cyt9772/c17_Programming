#include <iostream>

using namespace std;

int calcConstant(){
    int foo=0;
    cout<<"초기값을 입력하시기 바랍니다.";
    cin>>foo;
    return foo;
}

int main(){
    const int x=calcConstant();
    cout<<x<<endl;
    return 0;
}