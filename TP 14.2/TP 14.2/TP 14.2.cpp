
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;
string *reponse = new string[3];
string *lignesqcm = new string[4];
void qcm();
char choix;
int main()
{
	lignesqcm[0] = "Combien font 1+1 ?";
	lignesqcm[1] = "Reponse A : ";
	lignesqcm[2] = "Reponse B : ";
	lignesqcm[3] = "Reponse C : ";
	reponse[0] = "3";
	reponse[1] = "1";
	reponse[2] = "2";
	qcm();
	cin >> choix;
	switch (choix){
	case 'A':
		cout << "vous avez choisi " << lignesqcm[0] << reponse[0] << endl;
		cout << "Reponse incorrecte, la bonne reponse etait " << lignesqcm[2] << reponse[2] << endl;
		break;
	case 'B':
		cout << "vous avez choisi " << lignesqcm[1] << reponse[1] << endl;
		cout << "Reponse incorrecte, la bonne reponse etait " << lignesqcm[2] << reponse[2] <<endl;
		break;
	case 'C':
		cout << "vous avez choisi " << lignesqcm[2] << reponse[2] << endl;
		cout << "C'est la bonne reponse !!!" << endl;
		break;
	default:
		cout << "erreur !" << endl;
		break;

	}
	delete[] reponse;
	delete[] lignesqcm;
}

void qcm() {
	
	cout << lignesqcm[0] << endl;
	cout << lignesqcm[1] << reponse[0] << endl;
	cout << lignesqcm[2] << reponse[1] << endl;
	cout << lignesqcm[3] << reponse[2] << endl;

}