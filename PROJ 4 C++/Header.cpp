#include <string.h>
#include <iostream>
#include "Header.h"


using namespace std;

Compte::Compte()
{

	this->NumCompte = 0;
	this->NomProp = new char[10];
	strcpy(this->NomProp, "NULL");
	this->Solde = 0;

}

Compte::Compte(int Num, char* Nom, double Sol)
{

	this->NumCompte = Num;

	this->NomProp = new char[strlen(Nom)+1];

	strcpy(this->NomProp, Nom);

	this->Solde = Sol;

}

bool Compte::retirerArgent(double s)
{
	if (this->Solde >= s) {
		this->Solde -= s; // this->Solde = this->Solde - s
		return true;
	}

	else
	{
		return false;
	}

}

void Compte::desposerArgent(double x)
{

	this->Solde += x; //  this->Solde = this->Solde + x ;

}

void Compte::consulterSold()
{

	cout << "le Solde : " << this->Solde << endl;	

}

bool Compte::transfarg(Compte* x, double sm)
{

	if (this->retirerArgent(sm)) {

		x->Solde += sm;
		return true;
	}
	else {

		return false;
	}

}

Compte::~Compte()
{

	delete this->NomProp;
	this->NomProp = nullptr;
	cout << "the object was deleted" << endl;

}
