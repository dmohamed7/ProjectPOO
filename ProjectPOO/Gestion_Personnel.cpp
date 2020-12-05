#include "Gestion_Personnel.h"

using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;

Gestion_Personnel::Gestion_Personnel(String^ Nom, String^ Prenom, String^ Adresse, String^ Date_D_Embauche, String^ Nom_supperieur) {
    pr->setNom(Nom);
    pr->setPrenom(Prenom);
    pr->setAdresse(Adresse);
    pr->setDate(Date_D_Embauche);
    pr->setNomp(Nom_supperieur);
}

Gestion_Personnel::Gestion_Personnel(System::String^ Nom, System::String^ Prenom, System::String^ Adresse, System::String^ Date_D_Embauche, System::String^ Nom_supperieur, int id)
{
    pr->setNom(Nom);
    pr->setPrenom(Prenom);
    pr->setAdresse(Adresse);
    pr->setDate(Date_D_Embauche);
    pr->setNomp(Nom_supperieur);
    pr->setID(id);
}

Gestion_Personnel::Gestion_Personnel() {
   pr->setNom("");
    pr->setPrenom("");
   pr->setAdresse("");
   pr->setDate("");
    pr->setNomp("");
    
}

Gestion_Personnel::Gestion_Personnel(int id)
{
    pr->setID(id);
}

Gestion_Personnel::Gestion_Personnel(String^ Nom, String^ Prenom) {
    pr->setNom(Nom);
    pr->setPrenom(Prenom);
}

void Gestion_Personnel::Afficher()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(pr->afficher1(pr->getID()), getConDataBase()));
    setCmdDataBase(gcnew SqlCommand(pr->afficher1(pr->getID()), getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
    getConDataBase()->Open();
    setReader(getCmdDataBase()->ExecuteReader());
}

void Gestion_Personnel::Afficher_tous()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(pr->afficher_tout(),getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
}

void Gestion_Personnel::ajouterP()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(pr->creer(pr->getNom(),pr->getPrenom(),pr->getDate(),pr->getAdresse(),pr->Getnomp()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}

void Gestion_Personnel::Ajouter()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(pr->creer1(pr->getNom(), pr->getPrenom(), pr->getDate(), pr->getAdresse()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}

void Gestion_Personnel::Modifier()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(pr->modifier(pr->getNom(),pr->getPrenom(),pr->getDate(),pr->getAdresse(),pr->Getnomp(),pr->getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}



void Gestion_Personnel::Supprimer()
{
    setConstring("Data Source=(local);Initial Catalog=POO;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(pr->supprimer(pr->getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}


