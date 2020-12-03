#include "CPersonnel.h"
namespace NS_Composants
{
	void CPersonnel::setEncadreur(int a)
	{
		this->encadreur = a;
		}
	
	int CPersonnel::getEncadreur()
	{
		return this->encadreur;
	}
	void CPersonnel::setAdresse(String^ a)
	{
		this->adresse = a;
	}
	String^ CPersonnel::getAdresse()
	{
		return this->adresse;
	}
	void CPersonnel::setNomp(String^ nom)
	{
		this->nomp = nom;
	}
	String^ CPersonnel::Getnomp()
	{
		return this->nomp;
	}
	CPersonnel::CPersonnel()
	{
		this->encadreur = 0;
		this->adresse = "";
	}
	String^ CPersonnel::creer(String^ a , String^ b, String^ c,String^ d, int e)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche,Add_Personnel,ID_Personnel_Supervise) values('" + a + "','" + b + "','" + c + "','"+d+"',(SELECT ID_Personnel FROM Personnel WHERE ID_Personnel ="+e+"));";
	}
	String^ CPersonnel::afficher1(int a)
	{
		return "SELECT * FROM Personnel where ID_Personnel=" + a + "";
	}
}
