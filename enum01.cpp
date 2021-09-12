#include <iostream>

enum Color1{
    RED,
    GREEN,
    BLUE
};

//enum class Color2: short {GREEN=1, YELLOW, RED};
enum class Color2: short {GREEN=1, YELLOW, RED};

int main(){
    Color1 col=RED;
    Color2* others=new Color2();

    *others=Color2::YELLOW;

    switch(*others){
        case Color2::GREEN: 
            std::cout<<"초록색"; 
            break;
        case Color2::RED: 
            std::cout<<"붉은색"; 
            break;
        case Color2::YELLOW: 
            std::cout<<"노란색"; 
            break;
        default: 
            std::cout<<"col = "<<col<<std::endl;
            break;
    }
    std::cout<<std::endl;

}