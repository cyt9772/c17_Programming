#include <iostream>

constexpr unsigned long fibonacci(unsigned long i){
    return (i<=1ul)? i:(fibonacci(i-1)+fibonacci(i-2));
}

int main(){
    unsigned long i=fibonacci(15);
    std::cout<<i<<"=fibonacci(15)"<<std::endl;
}
