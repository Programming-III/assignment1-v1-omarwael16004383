#ifndef REPTILE_H_INCLUDED
#define REPTILE_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;
class Reptile:public Animal{
private:
    bool isVenomous;
public:
    Reptile();
    Reptile(bool isVenomous);
    bool getVenomous;
    void setVenomous:
    ~Reptile();
};



#endif // REPTILE_H_INCLUDED
