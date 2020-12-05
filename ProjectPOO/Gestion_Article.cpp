#include "Gestion_Article.h"

Gestion_Article::Gestion_Article(String^ ref, String^ Nom, String^ couleur, double uht, int ttc, int QT, int seuil) {

    ar->setRef_article(ref);
    ar->setNom_article(Nom);
    ar->setCouleur(couleur);
    ar->setPrix_uht(uht);
    ar->setPrix_TTC(ttc);
    ar->setQuantité(QT);
    ar->setseuil(seuil);

}

Gestion_Article::Gestion_Article(String^ ref, String^ Nom, String^ couleur, double uht, int ttc, int QT, int seuil, int id)
{
    ar->setRef_article(ref);
    ar->setNom_article(Nom);
    ar->setCouleur(couleur);
    ar->setPrix_uht(uht);
    ar->setPrix_TTC(ttc);
    ar->setQuantité(QT);
    ar->setseuil(seuil);
    ar->setID(id);
}



Gestion_Article::Gestion_Article() {
    ar->setRef_article("");
    ar->setNom_article("");
    ar->setCouleur("");
    ar->setPrix_uht(0);
    ar->setPrix_TTC(0);
    ar->setQuantité(0);
    ar->setseuil(0);

}

Gestion_Article::Gestion_Article(int id)
{
    ar->setID(id);
}



void Gestion_Article::Afficher()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(ar->afficher(ar->getID()), getConDataBase()));
    setCmdDataBase(gcnew SqlCommand(ar->afficher(ar->getID()), getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
    getConDataBase()->Open();
    setReader(getCmdDataBase()->ExecuteReader());
}

void Gestion_Article::Afficher_tous()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(ar->afficher_tout(ar->getID()), getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
}

void Gestion_Article::Ajouter()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(ar->ajouter(ar->getRef_article(), ar->getNom_article(), ar->getCouleur(), ar->getPrix_uht(), ar->getPrix_TTC(), ar->getQuantité(), ar->getseuil()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}


void Gestion_Article::Modifier()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(ar->modifier(ar->getRef_article(), ar->getNom_article(), ar->getCouleur(), ar->getPrix_uht(), ar->getPrix_TTC(), ar->getQuantité(), ar->getseuil(), ar->getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}



void Gestion_Article::Supprimer()
{
    setConstring("Data Source=(local);Initial Catalog=POO;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(ar->supprimer(ar->getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}