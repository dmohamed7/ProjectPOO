#pragma once
#include "CPersonne.h"
#include<iostream>
#include<string>


namespace NS_Composants
{


	ref class CPersonnel :public CPersonne
	{
	private:
		int encadreur;
		String^ adresse;
		String^ nomp;
	public:
		void setEncadreur(int a);
		int getEncadreur();
		void setAdresse(String^);
		String^ getAdresse();
		void setNomp(String^ nom);
		String^ Getnomp();
		CPersonnel();
		String^ creer(String^, String^, String^,String^,int);
		String^ afficher1(int a);


	};
}