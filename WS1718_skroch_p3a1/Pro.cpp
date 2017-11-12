#include "Pro.h"
#include <iostream>

Pro::Pro(){
    incrementme = 0;
}

Pro::Pro(const Pro& x){
    incrementme = x.incrementme;
    nameme = x.nameme;
}

Pro::~Pro(){
    
}

void Pro::print(){
    std::cout << "Incrementme-Value: " << incrementme << std::endl;
    std::cout << "Nameme-Value: " << nameme << std::endl;
}

int Pro::getincrementme(){
    return incrementme;
}

void Pro::increment(){
    incrementme++;
}

std::string Pro::getnameme(){
    return nameme;
}

void Pro::setnameme(std::string x){
    nameme = x;
}

