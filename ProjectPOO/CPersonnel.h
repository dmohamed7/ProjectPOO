#pragma once
#include "CPersonne.h"
#include<iostream>
#include<string>


namespace NS_Composants
{

	using namespace System;

	ref class CPersonnel :public CPersonne
	{
	private:
		String^ encadreur;
		String^ adresse;
	public:
		void setEncadreur(int a);
		String^ getEncadreur();
		CPersonnel();



	};
}