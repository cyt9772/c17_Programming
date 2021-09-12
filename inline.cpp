#include <iostream>
#include <string>

using namespace std;

int general(int i){
    return i>=0? i: -i;
}
#define unsafe(i) ((i) >=0 ? (i) : (-i))

inline int safe(int i){
    return i>=0? i:-i;
}

constexpr int expr(int i){
    return i>=0 ? i: -i;
}

int main(){
    int ans, x=0;
    ans=(x>=0) ?  x: -x;
    x++;
    cout<<"ans = "<<ans<<" , "<< x<<endl;

    x=0;
    ans = general(x++);
    cout<<"general(x++) = "<<ans<<","<<x<<endl;
    
    return 0;
}