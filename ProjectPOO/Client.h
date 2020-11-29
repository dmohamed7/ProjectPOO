#pragma once
#include<iostream>
#include<string>
using namespace System;
ref class Client
{
protected:
	String^ add_livraison;
	String^ add_facturation;
	String^ ville;
	
public:
	void setAdd_facturation(String^ adresse);
	void setadd_livraison(String^ adresse);
	void setVille(String^ v);

	Client();
	String^ getadd_livraison();
	String^ getadd_facturation();
	String^ getVille();
	
	
};
value struct Date
{private:
	int^ jour;
	int^ mois;
	int^ année;
	Date* date_naissance;
	Date* date_premier_achat;
public:
	
	void Date::setDATE_Naissance(int j, int m, int a)
	{
		this->date_naissance->jour = j;
		this->date_naissance->mois = m;
		this->date_naissance->année = a;
	}
		void Date::setDate_premier_achat(int j, int m, int a)
		{
			this->date_premier_achat->jour = j;
			this->date_premier_achat->mois = m;
			this->date_premier_achat->année = a;
		}
		int^ Date::getDate_premier_achat()
		{
			return this->date_premier_achat->jour;
			return this->date_premier_achat->mois;
			return this->date_premier_achat->année;
		}
		int^ Date::getDate_naissance()
		{
			return this->date_naissance->jour;
			return this->date_naissance->mois;
			return this->date_naissance->année;
		}
		
	


};
