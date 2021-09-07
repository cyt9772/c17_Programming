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
    
    return 0;
}