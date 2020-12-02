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
	public:
		void setEncadreur(int a);
		int getEncadreur();
		void setAdresse(String^);
		String^ getAdresse();
		CPersonnel();
		String^ creer(String^, String^, String^,String^,int);


	};
}