#include <iostream>
#include <math.h>

using namespace std;


template<typename T>
bool fequal(T a, T b){
    #define EPSILON 0.000001
    return fabs(a-b) < EPSILON;
}

void Print_int(int x){
    printf("%d 인수는 %s입니다. \n", x, (x)? "참":"거짓");
}

void Print_bool(bool x){
    cout<<x<<" 인수는 "<<(x? "참":"거짓")<<"입니다."<<endl;
    cout<<"bool 타입의 데이터는 "<<std::boolalpha<<x<<"와"<<!x<<" 로 표시할 수 있습니다."<<endl;
}

int main(){
    bool ok=true;
    bool notok=false;

    Print_int(100);
    Print_bool(ok);

    cout<<notok<<' '<<noboolalpha<<notok<<endl;

    boolalpha(cout);
    cout<<notok<<endl;

    bool istrue;
    // cin>>boolalpha>>istrue;
    // cout<<istrue<<" = " <<(istrue == true)<<endl;


    cout<<"================================"<<endl;
    double f = 1.0/3.0;
    cout<<scientific;
    cout<<"f= "<<f<<endl;

    double pi=3.14;
    printf("%.10lf %.10f \n", pi, (float)pi);
    cout<<boolalpha<<"(pi == 3.14)?" <<(pi == 3.14) <<endl;
    cout<<boolalpha<<"(pi == 3.14f)?" <<(pi == 3.14f) <<endl;
    cout<<boolalpha<<"((float)pi == 3.14f)?" <<((float)pi == 3.14f) <<endl;

    cout<<"================================"<<endl;
    cout<<boolalpha<<"fequal<float>(pi, 3.14f) ? "<<fequal<float>(pi, 3.14f) <<endl;                


    return 0;
}