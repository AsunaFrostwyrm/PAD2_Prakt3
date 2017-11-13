/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   P3A1.cpp
 * Author: Malinka
 *
 * Created on 11. November 2017, 00:12
 */

#include <cstdlib>
#include <iostream>
#include <string>
#include "Bas.h"
#include "Pro.h"
#include "Roo.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    Pro Pro1;
    Pro Pro2;
    Pro Pro3;
    Pro Pro4;
    Pro Pro5;
    Roo Roo1;
    Roo Roo2;
    Roo Roo3;
    Roo Roo4;
    Roo Roo5;

    Pro1.setname("Pro1");
    Pro2.setname("Pro2");
    Pro3.setname("Pro3");
    Pro4.setname("Pro4");
    Pro5.setname("Pro5");
    Roo1.setname("Roo1");
    Roo2.setname("Roo2");
    Roo3.setname("Roo3");
    Roo4.setname("Roo4");
    Roo5.setname("Roo5");

    Pro1.setvalue(1);
    Pro2.setvalue(2);
    Pro3.setvalue(3);
    Pro4.setvalue(4);
    Pro5.setvalue(5);
    Roo1.setvalue(6);
    Roo2.setvalue(7);
    Roo3.setvalue(8);
    Roo4.setvalue(9);
    Roo5.setvalue(10);

    Bas * Bas1{nullptr};
    Bas1 = Bas1->getlastpointer();
    for (int i = 0; i < 10; ++i) {
        cout << "Name: " << Bas1->getname() << " Value: " << Bas1->getvalue() << endl;
        Bas1 = Bas1->getprevpointer();

    }
    return 0;
    return 0;
}

