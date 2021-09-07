#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;

int main(){
    const char* cc="문자열을 입력합니다. This is a string";
    char cb[17];
    char *str;

    memcpy(cb, cc, 17);
    str=(char*)malloc(strlen(cc)+1);
    strcpy(str, cc);

    cout<<"cc = "<<cc<<" : 문자열의 크기는 "<<strlen(cc)<<endl;
    cout<<"cb = "<<cb<<" : 문자열의 크기는 "<<strlen(cb)<<endl;
    cout<<"str = "<<str<<" : 문자열의 크기는 "<<strlen(str)<<endl;
    free(str);

    string str1;
    str1=cc;
    cout<<"str1: "<<str1.data()<<", 문자열의 크기는 "<<str1.length()<<endl;

    str1="클래스 내부에서 공간을 잡는다.";
    str1 +="따라서 별도 메모리 공간을 잡지 않아도 사용이 가능하다.";
    cout<<"str1: "<<str1.data()<<", 문자열의 크기는 "<<str1.length()<<endl;

    string s0("Initial String");
    string s1;
    string s2(s0);
    string s3(s0, 8, 3);
    string s4(s0,6);
    string s5(10,'x');

    cout<<"s1: " <<s1.data()<<endl;
    cout<<"s2: " <<s2.data()<<endl;
    cout<<"s3: " <<s3.data()<<endl;
    cout<<"s4: " <<s4.data()<<endl;
    cout<<"s5: " <<s5.data()<<endl;

    return 0;
}
