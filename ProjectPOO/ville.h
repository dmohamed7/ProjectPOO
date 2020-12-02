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
	void setville(String^ a);
	void setID(int id);
	int getID();
	String^ getville();
	ville();
	String^ ajouter(String^ a);
	//String^ modifier();
	//String^ afficher();

};
}
