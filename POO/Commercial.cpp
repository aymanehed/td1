#include "Commercial.h"
#include <iostream>

using namespace std;
using namespace GestEmploye;

Commercial::Commercial(string nom, float indice, float vm)
    : Employe(nom, indice)
{
    this->venteMois = vm;
}

void Commercial::miseajour(float V)
{
    this->venteMois += V;
}

float Commercial::calculerSal() const
{
    return this->indiceSal + this->venteMois * 0.05;
}

Commercial::~Commercial()
{
    cout << "Destructeur de la classe Commercial" << endl;
}