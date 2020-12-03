#include "ville.h"
namespace NS_Composants
{
	void ville::setvile(String^ a)
	{
		this->vile = a;
	}

	void ville::setID(int id)
	{
		this->ID = id;
	}

	int ville::getID()
	{
		return this ->ID;
	}

	String^ ville::getvile()
	{
		return this->vile;
	}

	ville::ville()
	{
		this->vile = "";
		this->ID = 0;
	}

	String^ ville::ajouter(String^ a)
	{
		return "INSERT INTO Ville(Ville) values('" + vile + "')";
	}
	String^ ville::modifier(String^ a,int b)
	{
		return "UPDATE Ville SET ville = '" + a + "' WHERE ID_VILLE = " + b + "";
	}
	String^ ville::supprimer(int^ a)
	{
		return "delete from Ville WHERE ID_VILLE=" + a + "";
	}
}