// ConsoleApplication4.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{


	
	int erreur = 0;
	int x = 3;
	while (erreur <= 2) {
		cout << "entrez le mot de passe" << '\n';
		string motdepasse;
		cin >> motdepasse;


		if (motdepasse == "admin") {

			cout << "session administrateur ouverte" << '\n';
			break;


		}
		else {
			motdepasse.erase();
			x--;
			cout << "mot de passe incorrect, il vous reste " << x << " essais" << '\n';
			erreur++;
			
		}

	}
	if (erreur == 3) {
		cout << "SESSION VERROUILLEE" << '\n';
	}
	cout << "fin du programme" << '\n';

	return 0;




}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Conseils pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
