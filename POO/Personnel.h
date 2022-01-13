#pragma once
#include "Employe.h"
#include <vector>

namespace GestEmploye {
	class Personnel
	{
	private:
		vector<Employe*> personnel;

	public:
		Personnel(Employe* e);
		void addEmploye(Employe* e);
		float sommeSal();
		~Personnel();
	};
};