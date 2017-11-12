/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Pro.h
 * Author: Malinka
 *
 * Created on 11. November 2017, 00:44
 */

#ifndef PRO_H
#define PRO_H

#include "Bas.h"

class Pro : public Bas {
public:
    Pro();
    Pro(const Pro&);
    ~Pro();
    void print();
    int getincrementme();
    void increment();
    std::string getnameme();
    void setnameme(std::string);
private:
    int incrementme;
    std::string nameme;

};



#endif /* PRO_H */

