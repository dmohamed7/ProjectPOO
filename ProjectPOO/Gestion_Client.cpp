#include "Gestion_Client.h"

Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ Adresse, String^ adresse, String^ date, String^ date2, String^ ville1, int id, int ID)
{
    cl.setNom(Nom);
    cl.setID(ID);
    cl.setPrenom(Prenom);
    cl.setDate(date);
    cl.setAdd_facturation(Adresse);
    cl.setadd_livraison(adresse);
    vl.setvile(ville1);
    vl.setID(id);
}

Gestion_Client::Gestion_Client(int id)
{
    cl.setID(id);
}

Gestion_Client::Gestion_Client(String^ Nom, String^ Prenom, String^ date, String^ date2)
{
    cl.setNom(Nom);
    cl.setPrenom(Prenom);
    cl.setDate(date);
    cl.setDate2(date2);
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
    getConDataBase()->Open();
    setReader1(this->getCmdDataBasee()->ExecuteReader());
    getConDataBase()->Close();
}

void Gestion_Client::ajouter1()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(cl.creer1(cl.getadd_facturation(), cl.getadd_livraison(), cl.getNom(), vl.getvile()), getConDataBase()));
    getConDataBase()->Open();
    setReader1(this->getCmdDataBase()->ExecuteReader());
}



void Gestion_Client::Supprimer()
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    setCmdDataBase(gcnew SqlCommand(cl.supprimer(cl.getID()), getConDataBase()));
    getConDataBase()->Open();
    setReader(this->getCmdDataBase()->ExecuteReader());
    getConDataBase()->Close();
    getConDataBase()->Open();
    setReader1(this->getCmdDataBasee()->ExecuteReader());
    getConDataBase()->Close();
}