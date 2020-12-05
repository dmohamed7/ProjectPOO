#pragma once
#include "SQL.h"
#include"CPersonnel.h"
ref class Gestion_Personnel : public SQL
{
public:
    NS_Composants::CPersonnel^ pr = gcnew NS_Composants::CPersonnel();

    Gestion_Personnel(System::String^, System::String^, System::String^, System::String^, System::String^);
    Gestion_Personnel(System::String^, System::String^, System::String^, System::String^, System::String^,int id);
    Gestion_Personnel(System::String^, System::String^);
    Gestion_Personnel();
    Gestion_Personnel(int id);
    void Afficher();
    void Afficher_tous();
    void Ajouter();
    void ajouterP();
    void Modifier();
    void Supprimer();
    

};

