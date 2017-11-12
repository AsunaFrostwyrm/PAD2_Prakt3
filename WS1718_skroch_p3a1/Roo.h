/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Roo.h
 * Author: Malinka
 *
 * Created on 11. November 2017, 00:53
 */

#ifndef ROO_H
#define ROO_H

#include "Bas.h"

class Roo : public Bas {
public:
    Roo();
    Roo(const Roo&);
    ~Roo();
    void print();
    int getdecrementme();
    void decrement();
    std::string getnameme();
    void setnameme(std::string);
private:
    std::string nameme;
    int decrementme;
};


#endif /* ROO_H */

