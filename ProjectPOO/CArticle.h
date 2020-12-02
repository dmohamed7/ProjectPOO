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
		int Ref_article;
		String^ nom_article;
		int quantité;
		float prix_uht;
		float prix_TTC;
		int TVA;
		String^ couleur;
		int seuil;
	public:
		void setID(int id);
		void setRef_article(int REF);
		void setNom_article(String^ N);
		void setQuantité(int q);
		void setPrix_uht(float Prix);
		void setPrix_TTC(float prix);
		void setTVA(int tva);
		void setCouleur(String^ c);
		void setseuil(int a);
		int getID();
		int  getseuil();
		String^ getCouleur();
		int getRef_article();
		String^ getNom_article();
		int getQuantité();
		float getPrix_uht();
		float getPrix_TTC();
		int getTVA();
		CArticle();
		String^ ajouter(int a, String^ b, String^ c, float g, int d, int e, int f);
		String^ modifier(int a, String^ b, String^ c,float g, int d, int e, int f, int id);
		String^ supprimer(int d);
	};
}