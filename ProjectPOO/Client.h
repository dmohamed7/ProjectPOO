#pragma once
#include<iostream>
#include<string>
using namespace std;
using namespace System;
ref class Client
{private:
String^	add_livraison;
String^ add_facturation;
Date* date_naissance;
public:
	void setDATE_Naissance(int j, int m, int a);
	void setAdd_facturation(String^ adresse);
	void setadd_livraison(String^ adresse);
	Client();
	String^ getadd_livraison();
	String^ getadd_facturation();
	int getDate_naissance();
};
private struct Date
{
	int jour, mois, année;
};

