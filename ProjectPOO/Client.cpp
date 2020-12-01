#include "Client.h"
#include<iostream>
#include<string>
namespace NS_Composants
{
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

	void Client::setDate(String^ a)
	{
		this->date = a;
	}

	void Client::setDate2(String^ a)
	{
		this->date2 = a;
	}

	String^ Client::creer(String^ a,String^ b,String^ c,String^ d)
	{
		return "INSERT INTO Client(Nom_C,Prenom_C,Date_de_naissance,Date_du_premier_achat) values('" + nom + "','" + prenom + "','" + date + "','" + date2 + "')";
	}

	Client::Client()
	{

		this->ville = "";
		this->add_facturation = "";
		this->add_livraison = "";
		this->date = "";
		this->date2 = "";


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

	String^ Client::getDate()
	{
		return this->date;
	}

	String^ Client::getDate2()
	{
		return this->date2;
	}


}
