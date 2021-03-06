// ConsoleApplication10.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
#include <String>
using namespace std;																	// utilise std:: automatiquement

int main()
{
	float valeur = 0;				
	string rayOuDiam;																	// chaîne qui permettra de choisir entre le rayon ou le diamètre
	string reponse;

	cout << "Cette application permet de calculer l'aire d'un disque" << '\n'; // on envoit à la console ce qu'il y a entre guillemets
	cout << "le rayon ou le diametre ne doit pas dépasser 10 puissance 19"<< '\n';
	while (reponse != "N") // tant que la réponse de la ligne 56 n'est pas non, on relance le programme
	{
		while (1) // boucle infinie
		{
			rayOuDiam.clear(); // on vide la chaine de caractères car si l'utilisateur tape autre chose que rayon ou diametre on va relancer
			cout << "Voulez vous utiliser le rayon ou le diametre du disque ?" << '\n';
			cin >> rayOuDiam; // commande qui permet à l'utilisateur de rentrer des valeurs dans des variables
			if (rayOuDiam == "rayon" || rayOuDiam == "diametre") { break; } // si l'utilisateur a bien choisi, on sort de la boucle while avec une break;
		}


	if (rayOuDiam == "rayon") { // si il a choisi rayon
						while (valeur <= 0)
						{
						cout << "entrez la valeur du rayon" << '\n';
						
						cin >> valeur;					
						}
				valeur = pow(valeur, 2); // on fais la valeur au carré
				valeur = valeur * 3.14; // puis on multiplie par pi
		
				}


	else if (rayOuDiam == "diametre") { // sinon si il a choisi diametre
						while (valeur <= 0) 
						{
						cout << "entrer le diametre" << '\n';
						cin >> valeur;
						}
				valeur = valeur / 2;
				valeur = pow(valeur, 2);
				valeur = valeur * 3.14;
			
		}
		

	cout << "l'aire du disque est de " << valeur << '\n';
	reponse.clear(); // on vide la chaîne car si l'utilisateur choisi autre chose que N, il continue le programme et ne pourra plus choisir N à la fin car les caractères s'additionnent
	valeur = 0; // on remet la valeur à 0 pour que l'utilisateur puisse relancer le calcul directement
	cout << "voulez-vous continuer a utiliser le programme Y/N ?" << '\n';
	cin >> reponse;

	}

	cout << "fin de programme" << '\n';







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
