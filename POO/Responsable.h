#pragma once
#include "Employe.h"
#include <iostream>
#include <vector>

namespace GestEmploye {
    class Responsable :
        public Employe
    {
    private:
        string status;
        vector<Employe*> sub;

    public:
        Responsable(string nom, float indice, string status);
        void afficher() const override;
        void addSub(Employe* e);
        ~Responsable();
    };
};