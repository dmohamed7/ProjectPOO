#pragma once
#include "Client.h"
#include"CArticle.h"
#include<iostream>
#include<string>
using namespace System;
ref class Ccommande
{
private:
	
	String^ REF;
	String^ moyen_payment;
	Date* date_livraison;
	Date* date_emmision;
};