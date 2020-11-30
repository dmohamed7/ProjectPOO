#pragma once
#include "CPersonne.h"
#include<iostream>
#include<string>

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
