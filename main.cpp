#include "sculptor.h"
#include <iostream>
#include <fstream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
    Sculptor projeto(100,100,100);
    projeto.setColor(0.9999,0,0,1);
    projeto.putSphere(50,50,50, 40);
    projeto.setColor(0.99,0.99,0.99,1);
    projeto.putEllipsoid(34,50,50,10,16,5);
    projeto.putEllipsoid(66,50,50,10,16,5);
    projeto.setColor(0,0,0.9999,1);
    projeto.putSphere(30,50,50, 6);
    projeto.putSphere(62,50,50, 6);
    projeto.cutBox(0, 99, 0, 99, 0, 49);
    projeto.cutBox(0, 99, 0, 99, 51, 99);
    projeto.writeOFF("C:/Users/G/Desktop/elesvoltaram.off");
    // Teste de todas as funções
    /*projeto.setColor(0.9999,0.5,0.5,1);
    projeto.putBox(6,12,6,12,6,12);
    projeto.cutBox(10,12,10,12,10,12);
    projeto.setColor(0.9999,0,0,0.9);
    projeto.putSphere(30,30,30,21);
    projeto.cutSphere(30,30,30,20);
    projeto.setColor(0.2,0.8,0.5,0.1);
    projeto.putEllipsoid(60,70,60,6,15,18);
    projeto.cutEllipsoid(70,75,70,10,23,30);
    projeto.writeOFF("C:/Users/G/Desktop/p.off");*/

}
