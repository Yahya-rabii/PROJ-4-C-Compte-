#include <iostream>
#include "Header.h"
#include <string.h>

using namespace std;

int main()
{
	char nm[20] = "Ahmed Amine";

	Compte A(50003, nm, 8050.175);

	A.consulterSold();

	A.desposerArgent(12000);

	cout << endl ;

	cout << "le solde apres ajout du montant : " << endl;

	A.consulterSold();

	cout << endl; 
	cout << endl;

}