#include "Personnel.h"
#include <iostream>

using namespace GestEmploye;

Personnel::Personnel(Employe* e)
{
	this->personnel.push_back(e);
}

void GestEmploye::Personnel::addEmploye(Employe* e)
{
	this->personnel.push_back(e);
}

float Personnel::sommeSal()
{
	float sommeSal = 0;
	for (int i = 0; i < this->personnel.size(); i++)
	{
		sommeSal += this->personnel[i]->calculerSal();
	}
	return sommeSal;
}

Personnel::~Personnel()
{
	this->personnel.clear();
}
