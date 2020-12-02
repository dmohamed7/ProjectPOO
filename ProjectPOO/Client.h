#pragma once
#include<iostream>
#include<string>
#include"CPersonne.h"

namespace NS_Composants
{
	using namespace System;
	ref class Client :public CPersonne
	{
	protected:
		String^ add_livraison;
		String^ add_facturation;
		String^ date;
		String^ date2;
		String^ nom_c;
		
	public:
		void setAdd_facturation(String^ adresse);
		void setadd_livraison(String^ adresse);
		void setDate(String^ a);
		void setDate2(String^ a);
		String^ creer(String^, String^, String^, String^);
		String^ modifier(String^, String^, String^, String^,int id);
		String^ supprimer(int a);
		Client();
		String^ getadd_livraison();
		String^ getadd_facturation();
		String^ getDate();
		String^ getDate2();



	};
}