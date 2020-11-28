#include "CPersonne.h"
#include<iostream>
#include<string>

using namespace std;
using namespace System;



String^ CPersonne::getNom()
{
	return nom;
}

String^ CPersonne::getPrenom()
{
	return prenom;
}


void CPersonne::setNom(String^ n )
{
	this->nom = n;
}

void CPersonne::setPrenom(String^ P)
{
	this->prenom = P;
}


CPersonne::CPersonne()
{
	this->nom ="";
	this->prenom = "";
}


