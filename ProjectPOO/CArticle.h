#pragma once
#include<iostream>
#include<string>
using namespace System;
ref class CArticle
{protected:
	String^ Ref_article;
	String^ nom_article;
	int quantit�;
	double prix_uht;
	double prix_TTC;
	double TVA;
	String^ nature_article;
public:
	void setRef_article(String^ REF);
	void setNom_article(String^ N);
	void setQuantit�(int q);
	void setPrix_uht(double Prix);
	void setPrix_TTC(double prix);
	void setTVA(double tva);
	String^ getRef_article();
	String^ getNom_article();
	int getQuantit�();
	double getPrix_uht();
	double getPrix_TTC();
	double getTVA();
	CArticle();
	//void ajouter();
	//void modifier();
	//void supprimer();
};

