#pragma once
#include<iostream>
#include<string>


using namespace std;
using namespace System;


ref class CPersonne
{protected:
	String^ nom;
	String^ prenom;
public:
	String^ getNom();
	String^ getPrenom();
	void setNom(String^ n);
	void setPrenom(String^ P);
	CPersonne();
	void creer();
	void modifier();
	void supprimer();
	void afficher();


	
	

};

