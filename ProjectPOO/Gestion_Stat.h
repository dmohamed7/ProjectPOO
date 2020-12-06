#pragma once
#include "SQL.h"
namespace Service {
	using namespace System;
	using namespace System::Data;
	
	ref class SVC_Gstat
	{
	private:
		
	public:
		SQL^ cad =gcnew SQL();
		SVC_Gstat();
		float calculpaniermoyen();
		float calculchiffreaffaire(DateTime^, DateTime^);
		DataTable^ produitsousseuil();
		float calcultotalachatclient(int id);
		DataTable^ topvendu();
		DataTable^ flopvendu();
		float valeurcommercialstock();
		float valeurachatstock();
		DataTable^ clientliste();
	};
}