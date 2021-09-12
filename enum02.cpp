#include <iostream>

using namespace std;

enum Days {Sunday=0, Monday=1, Tuesday, Wednesday, Thursday, Friday, Saturday=6};
enum class Months: short {Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

const char *week[]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
const char *months[]={"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};

inline Days operator+(Days a, Days b){
    int c=((int)a + (int)b)%7;
    return (Days) c;
}

const char *DayName(Days day){
    if (day<Sunday || day>Saturday){
        return "알수 없는 요일";
    }
    return week[day];
}

int main(){
    Days today=Thursday;
    Days tomorrow=(Days)(Thursday+1);

    cout<<DayName(today)<< "은 "<<today+1<<"번째 요일이다." <<endl;
    cout<<DayName(tomorrow)<< "은 "<<tomorrow+1<<"번째 요일이다." <<endl;

    today=(Days)(Saturday+Friday);
    cout<<DayName(today)<< "은 "<<(int)today<<"번째 요일이다." <<endl;

    Months thisMonth=Months::Sep;
    Months nextMonth=(Months)((thisMonth==Months::Dec)? 1:(short)thisMonth+1);
    short monthNumber=(short)thisMonth;

    cout<<months[monthNumber-1]<<"월은 "<<monthNumber<<"번째 월이다."<<endl;
    cout<<months[(short)nextMonth-1]<<"월은 "<<(int)nextMonth<<"번째 월이다."<<endl;

    return 0;
}