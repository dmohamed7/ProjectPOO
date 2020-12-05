#include "Gestion_Client.h"

Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ date, String^ date2)
{
    cl.setNom(Nom);
    cl.setPrenom(Prenom);
    cl.setDate(date);
    cl.setDate(date2);
   
    
}
Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ date, String^ date2, String^ Adresse, String^ adresse, String^ ville1, int id)
{
    cl.setNom(Nom);
    cl.setPrenom(Prenom);
    cl.setDate(date);
    cl.setDate(date2);
    cl.setAdd_facturation(Adresse);
    cl.setadd_livraison(adresse);
    vl.setvile(ville1);
    cl.setID(id);
}
Gestion_Client::Gestion_Client(String^ Nom,String^ prenom, String^ Adresse, String^ adresse,  String^ ville1)
{
    cl.setNom(Nom);
    cl.setPrenom(prenom);
    cl.setAdd_facturation(Adresse);
    cl.setadd_livraison(adresse);
    vl.setvile(ville1);
    
}

Gestion_Client::Gestion_Client(int id)
{
    cl.setID(id);
}

Gestion_Client::Gestion_Client(String^a)
{
    cl.setNom(a);
   
}



void Gestion_Client::Afficher()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(cl.afficher(cl.getID()), getConDataBase()));
    setCmdDataBase(gcnew SqlCommand(cl.afficher(cl.getID()), getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
    SqlCommand^ comm = getCmdDataBase();
    getConDataBase()->Open();
    setReader(comm->ExecuteReader());

}

void Gestion_Client::Afficher_tous()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setAdapter(gcnew SqlDataAdapter(cl.afficher_tous(), getConDataBase()));
    setData(gcnew DataTable());
    getAdapter()->Fill(getData());
}

void Gestion_Client::Ajouter()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(cl.creer(cl.getNom(), cl.getPrenom(), cl.getDate(), cl.getDate2()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
}

void Gestion_Client::afficher1()
{
    
    setCmdDataBasee(gcnew SqlCommand(cl.afficher1(cl.getID()), getConDataBase()));
    SqlCommand^ com = getCmdDataBasee();
    setReader1(com->ExecuteReader());
}

void Gestion_Client::Modifier()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(cl.modifier(cl.getNom(), cl.getPrenom(), cl.getDate(), cl.getDate2(), cl.getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
    getConDataBase()->Close();
   
}

void Gestion_Client::ajouter1()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBasee(gcnew SqlCommand(cl.creer1(cl.getadd_facturation(), cl.getadd_livraison(), cl.getNom(), vl.getvile()), getConDataBase()));
    getConDataBase()->Open();
    setReader1(this->getCmdDataBasee()->ExecuteReader());
   
   
}



void Gestion_Client::Supprimer()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBasee(gcnew SqlCommand(cl.supprimer1(cl.getID()), getConDataBase()));
    setCmdDataBase(gcnew SqlCommand(cl.supprimer(cl.getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader1(this->getCmdDataBasee()->ExecuteReader());
    getConDataBase()->Close();
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
    getConDataBase()->Close();
}

void Gestion_Client::modifier1()
{

    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBasee(gcnew SqlCommand(cl.modifier(cl.getadd_facturation(), cl.getadd_livraison(), vl.getvile(),cl.getID())));
    getConDataBase()->Open();
    setReader1(this->getCmdDataBasee()->ExecuteReader());
    getConDataBase()->Close();
}
