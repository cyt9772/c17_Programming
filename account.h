#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

struct Account{
    Account(const char *id, const char *nm, int bal){
        strcpy(account, id);
        strcpy(name, nm);
        balance=bal;
    }
    void Print() const{
        printf("게좌: %s, 소유자: %s", account, name);
        printf(",잔액: %i\n", balance);
    }

    void Deposit(int money){
        balance +=money;
    }

    void Withdraw(int money){
        balance -=money;
    }

    char account[20];
    char name[20];
    int balance;

};