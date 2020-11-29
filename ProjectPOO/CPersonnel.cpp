#pragma warning(disable : 4996)
#include "CPersonnel.h"
#include <ctime>
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
int CPersonnel::date()
{
		int a,m,j;
		time_t actuel = time(0);
		tm* ltm = localtime(&actuel);
		a = 1900 + ltm->tm_year;
		cout << "Année:" << a << endl;
		m = 1 + ltm->tm_mon;
		cout << "Mois: " << m << endl;
		j = ltm->tm_mday;
		cout << "jour: " << j << endl;
		return a;
		return m;
		return j;
}
