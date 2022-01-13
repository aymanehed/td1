#include "Responsable.h"
#include <string>

using namespace std;
using namespace GestEmploye;

Responsable::Responsable(string nom, float indice, string status)
    :Employe(nom, indice)
{
    this->status = status;
    this->sub = vector<Employe*>();
}

void Responsable::afficher() const
{
    this->Employe::afficher();
    cout << "Status : " << this->status << endl;
    for (int i = 0; i < this->sub.size(); i++)
    {
        this->sub[i]->afficher();
    }
}

void Responsable::addSub(Employe* e)
{
    this->sub.push_back(e);
}

Responsable::~Responsable()
{
    this->sub.clear();
}