#pragma once
#include<iostream>
#include<string>

namespace NS_Composants
{
	using namespace System;


	ref class CPersonne
	{
	protected:
		String^ nom;
		String^ prenom;
		String^ date;
	public:
		 String^ getDate();
		String^ getNom();
		String^ getPrenom();
		void setNom(String^ n);
		void setPrenom(String^ P);
	    void setDate(String^ a);
		CPersonne();
		String^ creer(String^, String^, String^);
		//void modifier();
		//void supprimer();
		//void afficher();





	};
}


