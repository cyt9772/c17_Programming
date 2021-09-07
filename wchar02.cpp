#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char en[]="Hello World!";
    cout<<"char"<<en<<endl;

    cout<<"입력문자 : ";
    cin>>en;

    for(int i=0;en[i];i++){
        cout<<(char)en[i];
    }
    cout<<endl;

    char wc1[]="한글화 작업";
    cout<<wc1<<endl;

    int i=0;
    while(wc1[i]){
        cout<<(char)wc1[i];
        ++i;
    }
    cout<<endl;

    const char *wc2="한글화 작업";
    cout<<wc2<<", 문자 크기: "<<strlen(wc2)<<endl;
    
    return 0;
}