#pragma once



class Compte
{


private:
	int   NumCompte;
	char* NomProp;
	double Solde;


public:

	Compte();

	Compte(int Num, char* Nom, double Sol);

	bool retirerArgent(double s);

	void desposerArgent(double x);

	void consulterSold();

	bool transfarg(Compte* x, double somme);

	~Compte();

};
