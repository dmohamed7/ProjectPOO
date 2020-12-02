#include "CArticle.h"
namespace NS_Composants
{
    void CArticle::setID(int id)
    {
        this->id = id;
    }
    void CArticle::setRef_article(int REF)
    {
        this->Ref_article = REF;
    }

    void CArticle::setNom_article(String^ N)
    {
        this->nom_article = N;
    }

    void CArticle::setQuantité(int q)
    {
        this->quantité = q;
    }

    void CArticle::setPrix_uht(double Prix)
    {
        this->prix_uht = Prix;
    }

    void CArticle::setPrix_TTC(double prix)
    {
        this->prix_TTC = prix;
    }

    void CArticle::setTVA(int tva)
    {
        this->TVA = tva;
    }

    void CArticle::setCouleur(String^ c)
    {
        this->couleur = c;
    }

    void CArticle::setseuil(int a)
    {
        this->seuil = a;
    }

    int CArticle::getID()
    {
        return this->id;
    }

    int CArticle::getseuil()
    {
        return this->seuil;
    }

    String^ CArticle::getCouleur()
    {
        return this->couleur;
    }

    int CArticle::getRef_article()
    {
        return this->Ref_article;
    }

    String^ CArticle::getNom_article()
    {
        return this->nom_article;
    }

    int CArticle::getQuantité()
    {
        return this->quantité;
    }

    double CArticle::getPrix_uht()
    {
        return this->prix_uht;
    }

    double CArticle::getPrix_TTC()
    {
        return this->prix_TTC;
    }

    int CArticle::getTVA()
    {
        return this->TVA;
    }

    CArticle::CArticle()
    {
        this->Ref_article = 0;
        this->nom_article = "";
        this->quantité = 0;
        this->prix_uht = 0.0;
        this->prix_TTC = 0.0;
        this->TVA = 0;
        this->couleur = "";
        this->seuil = 0;
    }
    String^ CArticle::ajouter(int a,String^ b,String^ c,int d,int e, int f)
    {
        return "INSERT INTO Article(Reference_Article,Designation,Couleur,Taux_TVA,Quantite_en_Stock,Seuil_de_reapprovisionnement) values('" + Ref_article + "','" + nom_article + "','" + couleur + "','"+ TVA +"','"+ quantité +"','"+seuil+"');";
    }
    String^ CArticle::supprimer(int d)
    {
        return "delete from Article WHERE ID_Article=" + id + "";
    }
}