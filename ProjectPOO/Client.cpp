#include "Client.h"

void Client::setDATE_Naissance(int j, int m, int a)
{
	this->date_naissance->jour = j;
	this->date_naissance->mois = m;
	this->date_naissance->année = a;
}

void Client::setAdd_facturation(String^ adresse)
{
	this->add_facturation = adresse;
}

void Client::setadd_livraison(String^ adresse)
{
	this->add_livraison = adresse;
}

Client::Client()
{
	this->date_naissance->jour = 0;
	this->date_naissance->mois = 0;
	this->date_naissance->année = 0;
}

String^ Client::getadd_livraison()
{
	return this->add_livraison;
}

String^ Client::getadd_facturation()
{
	return this->add_facturation;
}

int Client::getDate_naissance()
{
	return this->date_naissance->jour;
	return this->date_naissance->mois;
	return this->date_naissance->année;
}
