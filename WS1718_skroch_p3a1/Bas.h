/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Bas.h
 * Author: Malinka
 *
 * Created on 11. November 2017, 00:14
 */

#ifndef BAS_H
#define BAS_H

#include <string>

class Bas{
public:
    Bas();
    Bas(const Bas&);
    virtual ~Bas();
    virtual void print() = 0;
    std::string getname();
    void setname(std::string);
    int getvalue();
    void setvalue(int);
    Bas* getlastpointer();
    Bas* getprevpointer();
private:
    std::string name;
    int value;
    static Bas* last;
    Bas* prev;
    
};


#endif /* BAS_H */

