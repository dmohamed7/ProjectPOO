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

	int CPersonne::getID()
	{
		return this->ID;
	}


	void CPersonne::setID(int id)
	{
		this->ID = id;
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
		this->date = "";
		this->ID = 0;
	}

	 String^ CPersonne::creer(String^ a,String^ b ,String^ c)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche) values('" + a +"','"+b+"','"+c+"');";
	}

	 String^ CPersonne::supprimer(int a)
	 {
		 return "delete from Personnel WHERE ID_Personnel =" + a + "";
	 }

	 String^ CPersonne::afficher(int a)
	 {
		return "SELECT * FROM Client where ID_Client=" + a + "";
	 }

}