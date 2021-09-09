#include <cstdlib>
#include <cstdio>
#include <cstring>

struct Account{
    char account[20];
    char name[20];
    int balance;

    Account(const char *id, const char *nm, int bal){
        strcpy(account, id);
        strcpy(name, nm);
        balance=bal;
    }

    void Print(){
        printf("계좌: %s, 소유자: %s", account, name);
        printf(", 잔액: %i\n", balance);
    }

    void Deposit(int money){
        balance +=money;
    }

    void WithDraw(int money){
        balance -=money;
    }

};

int main(){
    char id[]="120-345-129099";
    char name[]="홍길동";

    Account hong=Account(id, name, 60000);
    hong.WithDraw(10000);
    hong.Print();
    
    return 0;
}