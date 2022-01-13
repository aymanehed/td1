#pragma once
#include "Employe.h"
#include <iostream>

namespace GestEmploye {
    class Commercial :
        public Employe
    {
    private:
        float venteMois;

    public:
        Commercial(string nom, float indice, float vm);
        void miseajour(float V);
        float calculerSal() const override;
        ~Commercial();
    };
};