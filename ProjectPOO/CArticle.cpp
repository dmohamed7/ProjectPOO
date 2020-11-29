#include "CArticle.h"

void CArticle::setRef_article(String^ REF)
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

void CArticle::setTVA(double tva)
{
    this->TVA = tva;
}

String^ CArticle::getRef_article()
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

double CArticle::getTVA()
{
    return this->TVA;
}

CArticle::CArticle()
{
    this->Ref_article = "";
    this->nom_article = "";
    this->quantité = 0;
    this->prix_uht = 0.0;
    this->prix_TTC = 0.0;
    this->TVA = 0.0;
}

