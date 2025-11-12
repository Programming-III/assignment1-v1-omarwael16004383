#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <string>
#include<iostream>
using namespace std;
class Animal{
     private:
         string name;
         int age;
         bool isHungry;
     public:
         Animal(string name,int age,bool isHungry);
         Animal();
         void display();
         void feed();
         string getName();
         int getAge();
         bool getisHungry();
         void setName();
         void setAge();
         void setIsHungry();
         ~Animal();








};


#endif // ANIMAL_H_INCLUDED
