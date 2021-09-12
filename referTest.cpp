#include <iostream>

using namespace std;

class SimpleCat{
public:
    SimpleCat(int age, int weight){
        itsAge=age;
        itsWeight=weight;
    }
    ~SimpleCat(){}
    int getAge() { return itsAge;}
    int getWeight() {return itsWeight;}

private:
    int itsAge;
    int itsWeight;
};



int main(){
    SimpleCat Frisky(5,8);
    SimpleCat& rCat=Frisky;

    cout<<"Frisky is: ";
    cout<<Frisky.getAge()<<" years old.\n";
    cout<<"And Frisky weight is : ";
    cout<<rCat.getWeight()<<" pounds.\n";
    return 0;
}