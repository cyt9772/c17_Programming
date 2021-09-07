#include <iostream>
#include <iomanip>
#include <locale>
#include <bitset>

void showDate(int m, int d, int y){
    std::cout<<std::setfill('0');
    std::cout<<std::setw(2)<<m<<'/'
            <<std::setw(2)<<d<<'/'
            <<std::setw(4)<<y<<std::endl;
    std::cout<<std::endl;
}

int main(){
    std::ios state(nullptr);
    state.copyfmt(std::cout);

    double f = 3.1415926535897932384626;
    std::cout<<f<<std::endl;  //default : 5

    double x=800000.0/81.0;
    std::cout<<std::fixed<<std::setprecision(2)<<x<<std::endl;
    x=2.0/3.0;

    std::cout<<std::fixed<<std::setprecision(4)<<x<<std::endl;
    std::cout<<std::endl;

    showDate(1,1,2019);

    unsigned long x0=64206;
    std::cout<<x0<<std::showbase
            <<"8진법은 \""<<std::oct<<x0<<"\""
            <<"16진법은 \""<<std::hex<<x0<<"\""<<std::endl;
    std::cout<<std::endl;

    std::cout<<"======================================="<<std::endl;
    std::cout.copyfmt(state);

    std::cout<<"Left Fill: \n"<<std::left
            <<std::setw(12)<<-1.23<<'\n'
            <<std::setw(12)<<std::hex
            <<std::showbase<<42<<std::endl;
    std::cout<<std::endl;

    std::cout<<"Internal Fill: \n"<<std::internal
            <<std::setw(12)<<-1.23<<'\n'
            <<std::setw(12)<<std::hex
            <<std::showbase<<42<<std::endl;
    std::cout<<std::endl;

        std::cout<<"Right Fill: \n"<<std::right
            <<std::setw(12)<<-1.23<<'\n'
            <<std::setw(12)<<std::hex
            <<std::showbase<<42<<std::endl;
    std::cout<<std::endl;

    double a=3.1415926534;
    double b=2006.0;
    double c=1.0e-10;

    std::cout.precision(5);
    std::cout<<"hexfloat: \n"<<std::hexfloat;
    std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
    std::cout<<'\n';

    std::cout<<"defaultfloat: \n"<<std::defaultfloat;
    std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
    std::cout<<'\n';

    std::cout<<"scientific: \n"<<std::scientific;
    std::cout<<a<<'\n'<<b<<'\n'<<c<<'\n';
    std::cout<<'\n';

    std::cout.copyfmt(state);
    unsigned char i=0b10010111;
    std::cout<<std::bitset<8>(i)<<std::endl;
 


    
    return 0;

}