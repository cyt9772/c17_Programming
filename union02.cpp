#include <iostream>
#include <cstring>

using namespace std;

#define None    1
#define Integer 2
#define Float   3
#define String  4

union DataValue{
    int v_int;
    float v_float;
    char *v_string;
};

struct DataNode{
    int type;
    DataValue value;

    void read_some_input(){
        char *p;
        char s[100];
        cout<<"문자나 정수 그리고 실수 입력을 부탁합니다.";
        cin>>s;

        long l = strtol(s,&p,10);
        if(*p==0){
            type=Integer;
            value.v_int=l;
            return;
        }

        float f=strtof(s,&p);
        if(*p==0){
            type=Float;
            value.v_float=f;
            return;
        }

        type=String;

        rsize_t len=strlen(s)+1;
        value.v_string=(char*)malloc(len);
        strcpy(value.v_string,s);
    }

    void free_strng(){
        if (String == type){
            free(value.v_string);
        }
    }
};

int main(){
    DataNode inputData;
    inputData.read_some_input();
    switch(inputData.type){
        case Integer:
            cout<<"Integer : "<<inputData.value.v_int<<endl;
            break;
        case Float:
            cout<<"Float : "<<inputData.value.v_float<<endl;
            break;
        case String:
            cout<<"String : "<<inputData.value.v_string<<endl;
            break;
    }

    inputData.free_strng();
}