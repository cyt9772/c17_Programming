#include <iostream>
#include <cstring>
#include <locale>

using namespace std;

int main(){
#if defined __linux__ || defined __CYGWN__
    setlocale(LC_ALL, "ko_KR.utf8");
    wcout<<L"setlocale(LC_ALL, \"ko_KR.utf8\");"<<endl;
#elif defined(WIN32)
    wcout.imbue(std::locale("kor"));
    wcin.imbue(std::locale)"kor"));
    cout<<"std::wcout.imbue(std::locale(\"kor\"));"<<endl;
#else
    setlocale(LC_ALL, "");
    wcout<<L"setlocale(LC_ALL,\"Korean\");"<<endl;
#endif
    
    wchar_t en[]=L"Hello World!";
    wcout<<"wchar_t"<<en<<L",wchar_t 바이트 크기: "
        <<sizeof(wchar_t)<<endl;
    //input
    wcin>>en;

    cout<<"std::cout을 사용하면";
    for(int i=0;en[i];i++){
        cout<<(char)en[i];
    }
    cout<<endl;

    wcout<<L"그러나, std:cout을 사용하면 \'"<<en<<"'"<<endl;

    wchar_t wc1[]=L"한글화 작업";
    wcout<<wc1<<endl;

    int i=0;
    while(wc1[i]){
        cout<<(char)wc1[i];
        i++;
    }
    cout<<endl;

    const wchar_t *wc2=L"\ud55c\uae00화 작업";
    wcout<<wc2<<L", 문자크기 : "<<wcslen(wc2)<< endl;
      
    return 0;
}