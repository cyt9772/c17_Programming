#include <iostream>
#include <cstring>

using namespace std;

union DataValue01{
    int v_int;
    float v_float;
    char v_string[4];
};

struct DataValue02{
    int v_int;
    float v_float;
    char v_string[4];
};

int main(){
    cout<<"공용체의 크기 = "<<sizeof(DataValue01)<<endl;
    cout<<"구조체의 크기 = "<<sizeof(DataValue02)<<endl;
}