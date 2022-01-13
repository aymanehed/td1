#pragma once
#include <iostream>

using namespace std;

namespace GestEmploye {
    class Employe
    {
    protected:
        string nom;
        float indiceSal;
        const int matricule;
        static int count;
        static float augmentation;

    public:
        Employe(string nom, float indice);
        virtual float calculerSal() const;
        virtual void afficher() const;
        ~Employe();
    };
};