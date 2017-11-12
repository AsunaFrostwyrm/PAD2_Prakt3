#include "Roo.h"
#include <iostream>

Roo::Roo(){
    decrementme = 100;
}

Roo::Roo(const Roo& x){
    decrementme = x.decrementme;
    nameme = x.nameme;
}

Roo::~Roo(){
    
}

void Roo::print(){
    std::cout << "Decrementme-Value: " << decrementme << std::endl;
    std::cout << "Nameme-Value: " << nameme << std::endl;
}

int Roo::getdecrementme(){
    return decrementme;
}

void Roo::decrement(){
    decrementme--;
}

std::string Roo::getnameme(){
    return nameme;
}

void Roo::setnameme(std::string x){
    nameme = x;
}