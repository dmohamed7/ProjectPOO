#include "Client.h"
#include<iostream>
#include<string>
namespace NS_Composants
{


	void Client::setAdd_facturation(String^ adresse)
	{
		this->add_facturation = adresse;
	}

	void Client::setadd_livraison(String^ adresse)
	{
		this->add_livraison = adresse;
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
		return "INSERT INTO Client(Nom_C,Prenom_C,Date_de_naissance,Date_du_premier_achat) values('" + a + "','" + b + "','" + c + "','" + d + "')";
	}

	String^ Client::creer(String^ a,int b)
	{
		return "INSERT INTO Adresse (Adresse,ID_VILLE) values ('" + a + "','" + b+"')";
	}

	String^ Client::modifier(String^ a, String^ b, String^ c, String^ d,int id)
	{
		return "UPDATE Client SET Nom_C = '" + a + "', Prenom_C = '" + b + "', Date_de_naissance = '" + c + "', Date_du_premier_achat = '" + d + "' WHERE ID_Client = " + id + "";
	}

	String^ Client::modifier(String^ a, int b)
	{
		return "UPDATE Adresse SET Adresse = '" + a + "' WHERE ID_VILLE = " + b + "";
	}

	String^ Client::supprimer(int a)
	{
		return "delete from Client WHERE ID_Client=" + a + "";
	}

	String^ Client::supprimer1(int a)
	{
		return "delete from Adresse WHERE ID_VILLE=" + a + "";
	}

	Client::Client()
	{

		
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



	String^ Client::getDate()
	{
		return this->date;
	}

	String^ Client::getDate2()
	{
		return this->date2;
	}

	void Client::setvile(int a)
	{
		this->Ville = a;
	}

	int Client::getvile()
	{
		return this->Ville;
	}


}
