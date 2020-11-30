
#include "CPersonnel.h"

	void CPersonnel::setEncadreur(int a)
	{
		if (a == 0)
		{
			this->encadreur = "oui";

		}
		else {
			this->encadreur = "non";
		}
	}
	String^ CPersonnel::getEncadreur()
	{
		return this->encadreur;
	}
	CPersonnel::CPersonnel()
	{
		this->encadreur = "";
		this->adresse = "";
	}

