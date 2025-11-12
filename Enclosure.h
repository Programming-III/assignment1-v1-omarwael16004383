#ifndef ENCLOSURE_H_INCLUDED
#define ENCLOSURE_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;
class Enclosure{
private:
    Animal*animal;
    int capacity;
    int currentCount;
public:
    Enclosure();
    Enclosure(Animal a,int capacity,int currentCount);
    void addAnimal(Animal*a);
    void displayAnimal();
    Animal getanimal();
    int getCapacity();
    int getCount();
    void setCapacity();
    void setAnimal();
    void setCount();
    ~Enclosure();


};



#endif // ENCLOSURE_H_INCLUDED
