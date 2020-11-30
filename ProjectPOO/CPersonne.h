#pragma once
#include<iostream>
#include<string>


	using namespace System;


	ref class CPersonne
	{
	protected:
		String^ nom;
		String^ prenom;
	public:
		String^ getNom();
		String^ getPrenom();
		void setNom(String^ n);
		void setPrenom(String^ P);
		CPersonne();
		String^ creer(String^ chemin);
		//void modifier();
		//void supprimer();
		//void afficher();





	};


