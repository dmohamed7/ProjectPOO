#include "SQL.h"


using namespace System::Data::SqlClient;
using namespace System::Data;

SQL::SQL() {

}

void SQL::setAdapter(SqlDataAdapter^ adapter)
{
    this->adapter = adapter;
}

void SQL::setAda(System::Data::SqlClient::SqlDataAdapter^ adapter)
{
    this->adapt = adapter;
}

SqlDataAdapter^ SQL::getAdapter()
{
    return adapter;
}

System::Data::SqlClient::SqlDataAdapter^ SQL::getAdapt()
{
    return adapt;
}

void SQL::setConDataBase(SqlConnection^ conDataBase)
{
    this->conDataBase = conDataBase;
}

void SQL::setConstring(System::String^ constring)
{
    this->constring = constring;
}

System::String^ SQL::getConstring()
{
    return constring;
}

void SQL::setReader(SqlDataReader^ myReader)
{
    this->myReader = myReader;
}

SqlDataReader^ SQL::getReader()
{
    return myReader;
}

void SQL::setReader1(System::Data::SqlClient::SqlDataReader^ a)
{
    this->myReadere = a;
}

System::Data::SqlClient::SqlDataReader^ SQL::getReader1()
{
    return this->myReadere;
}

void SQL::setCmd(System::String^ cmd)
{
    this->cmd = cmd;
}

System::String^ SQL::getCmd()
{
    return cmd;
}

void SQL::setData(System::Data::DataTable^ data)
{
    this->data = data;
}

void SQL::setDataa(System::Data::DataTable^ a)
{
    this->dataa = a;
}

System::Data::DataTable^ SQL::getData()
{
    return data;
}

DataTable^ SQL::getDataa()
{
    return this->dataa;
}

void SQL::setCmdDataBase(System::Data::SqlClient::SqlCommand^ cmdDataBase)
{
    this->cmdDataBase = cmdDataBase;
}

void SQL::setCmdDataBasee(System::Data::SqlClient::SqlCommand^ a)
{
    this->cmdDataBas = a;
}

System::Data::SqlClient::SqlCommand^ SQL::getCmdDataBase()
{
    return cmdDataBase;
}

SqlCommand^ SQL::getCmdDataBasee()
{
    return this->cmdDataBas;
}

int SQL::actionrowsID(String^ a)
{
    cmdDataBase->CommandText = a;
    int id = Convert::ToInt32(this->cmdDataBase->ExecuteScalar());
    return id;

}

DataTable^ SQL::getRows(String^ a)
{
    setConstring("Data Source=DESKTOP-2RBCNA4;Initial Catalog=poo;Integrated Security=True");
    setConDataBase(gcnew SqlConnection(getConstring()));
    getConDataBase()->Open();
    cmdDataBase = gcnew SqlCommand(a,getConDataBase());
   
    SqlDataAdapter^ da = gcnew SqlDataAdapter(cmdDataBase);
    data = gcnew DataTable();
    da->Fill(data);
    return data;

}

SqlConnection^ SQL::getConDataBase()
{
    return conDataBase;
}
