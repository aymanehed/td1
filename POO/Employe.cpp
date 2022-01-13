#include "Employe.h"

using namespace std;
using namespace GestEmploye;

int Employe::count = 0;
float Employe::augmentation = 50;


Employe::Employe(string nom, float indice)
    :matricule(++Employe::count)
{
    this->nom = nom;
    this->indiceSal = indice;
}

void Employe::afficher() const
{
    cout << "Nom : " << this->nom << endl;
    cout << "Matricule : " << this->matricule << endl;
    cout << "Indice Salarial : " << this->indiceSal << endl;
    cout << "Augmentation : " << Employe::augmentation << endl;
}
float Employe::calculerSal() const
{
    return this->indiceSal * Employe::augmentation;
}

Employe::~Employe()
{
    cout << "Destructeur de la classe Employe" << endl;
}