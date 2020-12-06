#pragma once
#include"SQL.h"
#include"CArticle.h"
ref class Gestion_Article :public SQL
{
public:
    NS_Composants::CArticle^ ar = gcnew NS_Composants::CArticle();

    Gestion_Article::Gestion_Article(String^ ref, String^ Nom, String^ couleur, double uht, int ttc, int QT, int seuil);
    Gestion_Article::Gestion_Article(String^ ref, String^ Nom, String^ couleur, double uht, int ttc, int QT, int seuil, int id);
    Gestion_Article::Gestion_Article();
    Gestion_Article(int id);
    Gestion_Article(String^ n);
    void Afficher();
    void Afficher_tous();
    void Ajouter();
    void Modifier();
    void Supprimer();
};

