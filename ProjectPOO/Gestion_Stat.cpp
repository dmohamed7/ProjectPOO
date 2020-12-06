#include "Gestion_stat.h"

Service::SVC_Gstat::SVC_Gstat()
{
    
}

float Service::SVC_Gstat::calculpaniermoyen()
{
    float chiffreaffaire;
    int nbcommande = this->cad->actionrowsID("Select count(id_facture) from facture");
    DataTable^ t = this->cad->getRows("select sum(Montant_Total_TTC) from Facture");
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
    DataTable^ d = this->cad->getRows("(SELECT sum (Montant_total_TTC)FROM Facture where Date_Facturation >convert(date,'" + debut->ToString()+ "',103) and Date_Facturation<convert(date,'" +fin->ToString()+ "',103))");
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
    DataTable^ d = this->cad->getRows("select sum(montant_total_ttc) from facture where id_client = " + id);
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
    DataTable^ t = this->cad->getRows("SELECT top 10 sum(Quantite_art_cmd)as total,(SELECT designation from Article where Article.ID_Article = Ligne_Commande.ID_Article) as designation from Ligne_Commande group by ID_ArticlE order by total desc ");

    return t;
}

System::Data::DataTable^ Service::SVC_Gstat::flopvendu()
{
    DataTable^ t = this->cad->getRows("SELECT top 10 sum(Quantite_art_cmd)as total,(SELECT designation from Article where Article.ID_Article = Ligne_Commande.ID_Article) as designation from Ligne_Commande group by ID_ArticlE order by total ASC");

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
