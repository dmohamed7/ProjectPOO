#pragma once
#include<iostream>
#include<string>
using namespace std;
using namespace System;
ref class CArticle
{protected:
	String^ Ref_article;
	String^ nom_article;
	int quantité;
	double prix_uht;
	double prix_TTC;
	double TVA;
public:
	void setRef_article(String^ REF);
	void setNom_article(String^ N);
	void setQuantité(int q);
	void setPrix_uht(double Prix);
	void setPrix_TTC(double prix);
	void setTVA(double tva);
	String^ getRef_article();
	String^ getNom_article();
	int getQuantité();
	double getPrix_uht();
	double getPrix_TTC();
	double getTVA();
	CArticle();
	//void ajouter();
	//void modifier();
	//void supprimer();
};

