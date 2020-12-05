#pragma once
#include<iostream>
#include<string>
namespace NS_Composants
{
	using namespace System;
	ref class CArticle
	{
	protected:
		int ID;
		String^ Ref_article;
		String^ nom_article;
		int quantité;
		double prix_uht;
		float prix_TTC;
		int TVA;
		String^ couleur;
		int seuil;
	public:
		void setID(int id);
		void setRef_article(String^ REF);
		void setNom_article(String^ N);
		void setQuantité(int q);
		void setPrix_uht(double Prix);
		void setPrix_TTC(float prix);
		void setTVA(int tva);
		void setCouleur(String^ c);
		void setseuil(int a);
		int getID();
		int  getseuil();
		String^ getCouleur();
		String^ getRef_article();
		String^ getNom_article();
		int getQuantité();
		double getPrix_uht();
		float getPrix_TTC();
		int getTVA();
		CArticle();
		String^ ajouter(String^ a, String^ b, String^ c, double g, int d, int e, int f);
		String^ modifier(String^ a, String^ b, String^ c,double g, int d, int e, int f, int id);
		String^ supprimer(int d);
		String^ afficher(int a);
		String^ afficher_tout(int a);
	};
}