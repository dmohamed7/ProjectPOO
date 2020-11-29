#pragma once
#include "Client.h"
#include"CArticle.h"
#include<iostream>
#include<string>
using namespace std;
using namespace System;
ref class Ccommande
{
private:
	Client CL;
	String^ REF;
	String^ moyen_payment;
	Date* date_livraison;
	Date* date_emmision;
	Date* D_solde;


};