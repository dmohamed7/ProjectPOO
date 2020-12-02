#pragma once
#include<iostream>
#include<string>
namespace NS_Composants
{
	using namespace System;
	ref class CArticle
	{
	protected:
		int id;
		int Ref_article;
		String^ nom_article;
		int quantité;
		double prix_uht;
		double prix_TTC;
		int TVA;
		String^ couleur;
		int seuil;
	public:
		void setID(int id);
		void setRef_article(int REF);
		void setNom_article(String^ N);
		void setQuantité(int q);
		void setPrix_uht(double Prix);
		void setPrix_TTC(double prix);
		void setTVA(int tva);
		void setCouleur(String^ c);
		void setseuil(int a);
		int getID();
		int  getseuil();
		String^ getCouleur();
		int getRef_article();
		String^ getNom_article();
		int getQuantité();
		double getPrix_uht();
		double getPrix_TTC();
		int getTVA();
		CArticle();
		String^ ajouter(int a, String^ b, String^ c, int d, int e, int f);
		//void modifier();
		String^ supprimer(int d);
	};
}