#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Data{
    Data(int a, const char *n, int b){
        age=a,
        strcpy(name, n);
        balance =b;
    }
    Data(){
        age=0;
        memset(name, 0, 100);
        balance =0;
    }

    int age;
    char name[100];
    int balance=0;
};

void Print(Data user){
    cout<<user.age<<", "<<user.name <<", 잔액"<<user.balance<<endl;
}

int main(){
    Data user02(33,"이순신",20000);
    Print(user02);

    Data user03{53,"강감찬",20000};
    Print(user03);

    Data user04=Data(45,"이성계",60000);
    Print(user04);

    Data *user05 = new Data(60,"연개소문",50000);
    Print(*user05);

    Data user06=Data();
    Print(user06);

    Data user07={21,"홍길동",10000};
    Print(user07);

    Data user08;
    Print(user08);

    Data *user_08=new Data;
    Print(*user_08);

    Data *user09 = new Data();
    Print(*user09);
    return 0;
}
