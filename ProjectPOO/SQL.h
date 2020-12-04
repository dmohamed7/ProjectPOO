#pragma once
using namespace System;
using namespace System::Data::SqlClient;
using namespace System::Data;
ref class SQL
{
private:
    System::String^ constring = "Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True";
    System::String^ cmd;
    System::Data::SqlClient::SqlDataAdapter^ adapter;
    System::Data::SqlClient::SqlDataAdapter^ adapt;
    System::Data::SqlClient::SqlDataReader^ myReader;
    SqlDataReader^ myReadere;
    System::Data::SqlClient::SqlConnection^ conDataBase;
    System::Data::SqlClient::SqlCommand^ cmdDataBase;
    System::Data::DataTable^ data;
    DataTable^ dataa;
    SqlCommand^ cmdDataBas;
public:
    SQL();

    void setAdapter(System::Data::SqlClient::SqlDataAdapter^);
    void setAda(System::Data::SqlClient::SqlDataAdapter^);
    System::Data::SqlClient::SqlDataAdapter^ getAdapter();
    System::Data::SqlClient::SqlDataAdapter^ getAdapt();

    void setConDataBase(System::Data::SqlClient::SqlConnection^);
    System::Data::SqlClient::SqlConnection^ getConDataBase();

    void setConstring(System::String^ constring);
    System::String^ getConstring();

    void setReader(System::Data::SqlClient::SqlDataReader^);
    System::Data::SqlClient::SqlDataReader^ getReader();
    void setReader1(System::Data::SqlClient::SqlDataReader^);
    System::Data::SqlClient::SqlDataReader^ getReader1();
    void setCmd(System::String^);
    System::String^ getCmd();

    void setData(System::Data::DataTable^);
    void setDataa(System::Data::DataTable^ a);

    System::Data::DataTable^ getData();
    DataTable^ getDataa();
    void setCmdDataBase(System::Data::SqlClient::SqlCommand^);
    void setCmdDataBasee(System::Data::SqlClient::SqlCommand^ a);

    System::Data::SqlClient::SqlCommand^ getCmdDataBase();
    SqlCommand^ getCmdDataBasee();
};

