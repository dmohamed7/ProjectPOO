#include "Client.h"
#include<iostream>
#include<string>
using namespace std;
using namespace System;


void Client::setAdd_facturation(String^ adresse)
{
	this->add_facturation = adresse;
}

void Client::setadd_livraison(String^ adresse)
{
	this->add_livraison = adresse;
}



void Client::setVille(String^ v)
{
	this->ville = v;
}

Client::Client()
{

	this->ville = "";
	this->add_facturation = "";
	this->add_livraison = "";


}

String^ Client::getadd_livraison()
{
	return this->add_livraison;
}

String^ Client::getadd_facturation()
{
	return this->add_facturation;
}

String^ Client::getVille()
{
	return this->ville;
}



