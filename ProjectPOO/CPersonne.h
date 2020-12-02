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
		int ID;
	public:
		 String^ getDate();
		String^ getNom();
		String^ getPrenom();
		int getID();
		void setID(int id);
		void setNom(String^ n);
		void setPrenom(String^ P);
	    void setDate(String^ a);
		CPersonne();
		virtual String^ creer(String^, String^, String^);
		//void modifier();
		//void supprimer();
		String^ afficher(int a);





	};
}


