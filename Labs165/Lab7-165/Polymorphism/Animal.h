#ifndef LA5_Animal_h
#define LA5_Animal_h
#pragma once
#include <iostream>

using namespace std;

class Animal {
    string name;
    int age;
    
public:
    
    Animal(){
        name = "Generic Name";
        age = 0;
    }
    
    Animal(string n, int a){
        name = n;
        age = a;
    }
    virtual void talk()=0; //virtual allows animal object to be casted as a child class first and then called
};

#endif