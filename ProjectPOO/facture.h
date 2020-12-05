#include "Ccommande.h"
#include "Client.h"
//include "Adresse.h"
//include "Paiement.h"


namespace NS_Composants {
	
	ref class facture
	{

	private:

		int ID_Facture;

		String^ Date_Facturation;

		float Montant_Total_HT;

		float Montant_Total_de_TVA;

		float Montant_Total_TTC;

		String^ Nom_soci�t�;

		String^ Add_soci�t�;

		int Num_service_client;

		int ID_commande;

		int ID_client;

		int ID_paiement;

		int ID_Adresse;

	public:

		// les setter et les getter

		int getID_Facture();

		String^ getDate_Facturation();

		float getMontant_Total_HT();

		float getMontant_Total_de_TVA();

		float getMontant_Total_TTC();

		String^ getNom_soci�t�();

		String^ getAdd_soci�t�();

		int getNum_service_client();

		int getID_commande();

		int getID_client();

		int getID_paiement();

		int getID_Adresse();

		void setID_Facture(int);

		void setDate_Facturation(String^);

		void setMontant_Total_HT(float);

		void setMontant_Total_de_TVA(float);

		void setMontant_Total_TTC(float);

		void setNom_soci�t�(String^);

		void setAdd_soci�t�(String^);

		void setNum_service_client(int);

		void setID_commande(int);

		void setID_client(int);

		void setID_paiement(int);

		void setID_Adresse(int);

		facture();

	};
}