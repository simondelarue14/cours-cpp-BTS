#include "pch.h"
#include <iostream>
#include "fonctions.h"
using namespace std;
int main()
{
	int nombreCoureurs;
	int const nombreCoureursMax(1000);
	double tempsCoureurs[nombreCoureursMax];
	double moyenneTemps(0.0);


	initialisationTableau(tempsCoureurs, nombreCoureursMax);
	nombreCoureurs = combienCoureurs();
	demanderTempsCoureurs(tempsCoureurs, nombreCoureurs);
	moyenneTemps = calculMoyenne(tempsCoureurs, nombreCoureurs);
	afficheResultat(tempsCoureurs, nombreCoureurs, moyenneTemps);

	system("pause");
	return 0;
}

