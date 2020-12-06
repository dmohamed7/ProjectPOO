#include "Gestion_stat.h"

Service::SVC_Gstat::SVC_Gstat()
{
    
}

float Service::SVC_Gstat::calculpaniermoyen()
{
    float chiffreaffaire;
    int nbcommande = this->cad->actionrowsID("Select count(id_commande) from commande");
    DataTable^ t = this->cad->getRows("select sum((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) from ligne_commande");
    if (t->Rows[0]->ItemArray[0]->ToString() != "") {
        chiffreaffaire = float::Parse(t->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        chiffreaffaire = 0.00;
    }
    return chiffreaffaire / nbcommande;
}

float Service::SVC_Gstat::calculchiffreaffaire(DateTime^ debut, DateTime^ fin)
{
    DataTable^ d = this->cad->getRows("select sum((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) from " +
        "(select remise,quantite_article,prix_ht,tva,date_emission from ligne_commande left join [dbo].[Commande] on commande.id_commande = ligne_commande.id_commande where date_emission > convert(date,'" +
        debut->Day + "/" + debut->Month + "/" + debut->Year + "',103) and date_emission < convert(date,'" + fin->Day + "/" + fin->Month + "/" + fin->Year + "',103)) as tbl");
    float chiffreafaire;
    if (d->Rows[0]->ItemArray[0]->ToString() != "") {
        chiffreafaire = float::Parse(d->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        chiffreafaire = 0.00;
    }
    return chiffreafaire;

}

System::Data::DataTable^ Service::SVC_Gstat::produitsousseuil()
{
    return this->cad->getRows("select reference_article, Designation from article where Seuil_de_reapprovisionnement > quantite_en_stock");
}

float Service::SVC_Gstat::calcultotalachatclient(int id)
{
    DataTable^ d = this->cad->getRows("select sum((prix_ht +(prix_ht*(tva-remise)/100))*quantite_article) from ligne_commande left join commande on commande.id_commande = ligne_commande.id_commande where id_client = " + id);
    float montant;
    if (d->Rows[0]->ItemArray[0]->ToString() != "") {
        montant = float::Parse(d->Rows[0]->ItemArray[0]->ToString());
    }
    else {
        montant = 0.00;
    }
    return montant;
}

System::Data::DataTable^ Service::SVC_Gstat::topvendu()
{
    DataTable^ t = this->cad->getRows("select top 10 sum(quantite_article) as total,(select designation from article where article.id_article = ligne_commande.id_article) as article from ligne_commande GROUP BY id_article ORDER BY total DESC");

    return t;
}

System::Data::DataTable^ Service::SVC_Gstat::flopvendu()
{
    DataTable^ t = this->cad->getRows("select top 10 sum(quantite_article) as total,(select designation from article where article.id_article = ligne_commande.id_article) as article from ligne_commande GROUP BY id_article ORDER BY total ASC");

    return t;
}

float Service::SVC_Gstat::valeurcommercialstock()
{
    return 0.0f;
}

float Service::SVC_Gstat::valeurachatstock()
{
    return 0.0f;
}

System::Data::DataTable^ Service::SVC_Gstat::clientliste()
{
    return this->cad->getRows("Select id_client, concat(nom_c,' ',prenom_c) as client from client");
}
