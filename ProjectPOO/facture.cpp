// facture.cpp
#include "facture.h"
using namespace NS_Composants;

int facture::getID_Facture()
{
	return this->ID_Facture;
}

String^ facture::getDate_Facturation()

{

	return this->Date_Facturation;

}

float  facture::getMontant_Total_HT()

{

	return this->Montant_Total_HT;

}

float facture::getMontant_Total_de_TVA()
{
	return this->Montant_Total_de_TVA;
}

float facture::getMontant_Total_TTC() {

	return this->Montant_Total_TTC;

}

String^ facture::getNom_société() {

	return this->Nom_société;

}

String^ facture::getAdd_société() {

	return this->Add_société;

}

int facture::getNum_service_client() {

	return this->Num_service_client;

}

int facture::getID_commande() {

	return this->ID_commande;

}

int facture::getID_client() {

	return this->ID_client;

}

int facture::getID_paiement() {

	return this->ID_paiement;

}

int facture::getID_Adresse() {

	return this->ID_Adresse;

}

void facture::setID_Facture(int  ID_Fact)

{
	this->ID_Facture = ID_Fact;
}

void facture::setDate_Facturation(String^ Date_Fact)

{

	this->Date_Facturation = Date_Fact;

}

void facture::setMontant_Total_HT(float  Montant_HT)

{
	this->Montant_Total_HT = Montant_HT;
}

void facture::setMontant_Total_de_TVA(float Montant_TVA)

{

	this->Montant_Total_de_TVA = Montant_TVA;

}

void facture::setMontant_Total_TTC(float Montant_TTC)
{

	this->Montant_Total_TTC = Montant_TTC;
}

void facture::setNom_société(String^ Nom_société)
{
	this->Nom_société = Nom_société;
}

void facture::setAdd_société(String^ addr)
{
	this->Add_société = Add_société;
}

void facture::setNum_service_client(int Num_service_cli)
{
	this->Num_service_client = Num_service_cli;
}

void facture::setID_commande(int ID_cmd)
{
	this->ID_commande = ID_cmd;
}

void facture::setID_client(int ID_cli)
{
	this->ID_client = ID_cli;
}

void facture::setID_paiement(int ID_paiement)

{

	this->ID_paiement = ID_paiement;

}

void facture::setID_Adresse(int id_adresse) {

	this->ID_Adresse = id_adresse;
}

facture::facture() {

	this->ID_Facture = -1;

	this->Date_Facturation = "";

	this->Montant_Total_HT = -1.00;

	this->Montant_Total_de_TVA = -1.00;

	this->Montant_Total_TTC = -1.00;

	this->Nom_société = "";

	this->Add_société = "";

	this->Num_service_client = -1;

	this->ID_commande = -1;

	this->ID_client = -1;

	this->ID_paiement = -1;

	this->ID_Adresse = -1;
}