#include "ville.h"
namespace NS_Composants
{
	void ville::setville(String^ a)
	{
		this->vile = a;
	}

	void ville::setID(int id)
	{
		this->ID = id;
	}

	int ville::getID()
	{
		return this->ID;
	}

	String^ ville::getville()
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
}