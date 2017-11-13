#include "Bas.h"

Bas::Bas(){
    prev = last;
    last = this;
}

Bas::Bas(const Bas& x){
    name = x.name;
    value = x.value;
}

Bas::~Bas(){
    
}

std::string Bas::getname(){
    return name;
}

void Bas::setname(std::string x){
    name = x;
}

int Bas::getvalue(){
    return value;
}

void Bas::setvalue(int x){
    value = x;
}

Bas* Bas::getlastpointer(){
    return last;
}

Bas* Bas::getprevpointer(){
    return prev;
}

Bas* Bas::last{ nullptr };