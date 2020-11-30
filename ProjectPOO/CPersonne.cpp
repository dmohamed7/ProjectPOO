#include "CPersonne.h"
#include<iostream>
#include<string>

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


	CPersonne::CPersonne()
	{
		this->nom = "";
		this->prenom = "";
	}

	String^ CPersonne::creer(String^ chemin)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche) values('" + chemin+"');";
	}

