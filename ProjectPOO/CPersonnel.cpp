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
	String^ CPersonnel::creer(String^ a , String^ b, String^ c,String^ d, String^ e)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche,Add_Personnel,ID_Personnel_Supervise) values('" + a + "','" + b + "','" + c + "','"+ d +"',(SELECT ID_Personnel FROM Personnel WHERE Nom_P = '"+ e +"'));";
	}
	String^ CPersonnel::creer1(String^ a, String^ b, String^ c, String^ d)
	{
		return "INSERT INTO Personnel(Nom_P, Prenom_P, Date_D_embauche,Add_Personnel) values('" + a + "','" + b + "','" + c + "','" + d +"');";
	
	}
	String^ CPersonnel::afficher1(int a)
	{
		return "SELECT * FROM Personnel where ID_Personnel=" + a + "";
	}
	String^ CPersonnel::afficher_tout()
	{
		return "SELECT* FROM Personnel";
	}
	String^ CPersonnel::modifier(String^ a, String^ b, String^ c, String^ d, String^ e ,int id)
	{
		return "UPDATE Personnel SET Nom_P = '" + a + "', Prenom_P = '" + b + "', Date_D_embauche = '" + c + "', Add_Personnel = '" + d + "',ID_Personnel_Supervise=(SELECT ID_Personnel FROM Personnel WHERE Nom_P = '" +e+ "') where ID_Personnel = " + id + "";
	}
}
