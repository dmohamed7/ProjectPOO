#pragma once
namespace NS_Composants
{ 
using namespace System;
ref class ville
{
private:
	String^ vile;
	int ID;
public:
	void setvile(String^ a);
	void setID(int id);
	int getID();
	String^ getvile();
	ville();
	String^ ajouter(String^ a);
	//String^ modifier();
	//String^ afficher();

};
}
