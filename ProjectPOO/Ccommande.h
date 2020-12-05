#pragma once
#include"CArticle.h"



namespace NS_Composants
{
    using namespace System;
    ref class Ccommande

    {


    private:

        int ID_commande;

        String^ Référence;

        String^ Date_livraison;

        String^ Date_emmision;

        int ID_client;



    public:

        // les setter et les getter

        int getID_commande();

        String^ getRéférence();

        String^ getDate_livraison();

        String^ getDate_emmision();

        int getID_client();

        void setRéférence(String^);

        void setDate_livraison(String^);

        void setDate_emmision(String^);

        void setID_commande(int);

        void setID_client(int);



        Ccommande();



        // les fonctions



        String^ ajouter(String^, String^, String^);

        String^ Modifier(String^, String^, String^, int);

        String^ supprimer(int);

        String^ Afficher(int);

    };
}