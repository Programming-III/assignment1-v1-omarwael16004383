#ifndef BIRD_H_INCLUDED
#define BIRD_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;
class Bird:public Animal{
private:
    float wingSpan;
public:
    Bird();
    Bird(float wingSpan);
    float getSpan();
    void setSpan();
    ~Bird();




};



#endif // BIRD_H_INCLUDED
