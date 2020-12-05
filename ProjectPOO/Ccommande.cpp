#include "Ccommande.h"
namespace NS_Composants
{
    int Ccommande::getID_commande()

    {

        return ID_commande;



    }

    String^ Ccommande::getRéférence()

    {



        return Référence;



    }

    String^ Ccommande::getDate_livraison()



    {

        return Date_livraison;

    }

    String^ Ccommande::getDate_emmision()



    {

        return Date_emmision;

    }



    int Ccommande::getID_client() {

        return this->ID_client;

    }

    void Ccommande::setID_commande(int ID_Cmd)



    {

        this->ID_commande = ID_Cmd;

    }

    void Ccommande::setID_client(int a)
    {
        this->ID_client = a;
    }

    void Ccommande::setRéférence(String^ REF)



    {



        this->Référence = REF;

    }

    void Ccommande::setDate_livraison(String^ Date_liv)

    {

        this->Date_livraison = Date_liv;

    }

    void Ccommande::setDate_emmision(String^ Date_E)



    {

        this->Date_emmision = Date_E;

    }

    Ccommande::Ccommande()



    {

        this->ID_commande = 0;

        this->Référence = "";

        this->Date_livraison = "";

        this->Date_emmision = "";

        this->ID_client = 0;



    }



    String^ Ccommande::ajouter(String^ REF, String^ Date_liv, String^ Date_E)

    {

        return "INSERT INTO commande(Référence, Date_livraison, Date_emmission values('" + REF + "','" + Date_liv + "','" + Date_E + "');";

    }

    String^ Ccommande::Modifier(String^ REF, String^ Date_liv, String^ Date_E, int id)

    {

        return "UPDATE * FROM commande SET Référence = '" +REF +"' Date_livraison = '"+ Date_liv + "', Date_emission = '" +Date_E+"', where ID_commande=" + id + "";

    }



    String^ Ccommande::supprimer(int ID)

    {

        return "DELETE * commande where ID_commande=" + ID + "";

    }



    String^ Ccommande::Afficher(int ID)

    {

        return "SELECT * FROM commande where ID_commande=" + ID + "";

    }

}