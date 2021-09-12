#include <iostream>
#include <cstdio>

using namespace std;

struct Data{
    int age;
    char name[100];
    int balance;
};

void Print(Data user){
    cout<<user.age<<", "<<user.name<<", 잔액 : "<<user.balance<<endl;
}

int main(){
    Data user03{53,"강감찬",20000};
    Print(user03);

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