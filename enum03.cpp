#include <iostream>

using namespace std;

enum Days{
    NOne=0x00,
    Sunday = 1<<0,
    Monday = 1<<1,
    Tuesday= 1<<2,
    Wednesday = 1<<3,
    Thursday = 1<<4,
    Friday = 1<<5,
    Saturday = 1<<6
};

const char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};

void DayName(int d){
    cout<<d<<", ";
    for(int i=0;i<7;i++){
        if(d&(1<<i))
            cout<<week[i]<<' ';
    }
    cout<<endl;
}

int main(){
    DayName(Sunday);
    Days meeting = Days((int)Thursday|(int)Monday);
    DayName(meeting);
}