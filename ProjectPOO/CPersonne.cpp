#include "CPersonne.h"
#include<iostream>
#include<string>
namespace NS_Composants
{
	String^ CPersonne::getNom()
	{
		return nom;
	}

	String^ CPersonne::getPrenom()
	{
		return prenom;
	}


	void CPersonne::setNom(String^ n)
	{
		this->nom = n;
	}

	void CPersonne::setPrenom(String^ P)
	{
		this->prenom = P;
	}
	void CPersonne::setDate(String^ a)
	{
		this->date = a;
	}
	String^ CPersonne::getDate()
	{
		return this->date;
	}

	CPersonne::CPersonne()
	{
		this->nom = "";
		this->prenom = "";
	}

	 String^ CPersonne::creer(String^ a,String^ b ,String^ c)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche) values('" + nom+"','"+prenom+"','"+date+"');";
	}

}