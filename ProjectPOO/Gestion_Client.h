#pragma once
#include "SQL.h"
#include "Client.h"
#include "ville.h"

ref class Gestion_Client : public SQL
{
public:
    NS_Composants::Client cl ;
    NS_Composants::ville vl;
    Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ Adresse, String^ adresse, String^ date, String^ date2, String^ ville1, int id, int ID);
    Gestion_Client::Gestion_Client(int id);
    Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ date, String^ date2);

    void Afficher();
    void afficher1();
    void Afficher_tous();
    void Ajouter();
    void ajouter1();
    void Modifier();
    void Supprimer();
};