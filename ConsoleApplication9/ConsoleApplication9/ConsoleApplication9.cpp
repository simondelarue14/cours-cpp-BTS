// ConsoleApplication9.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;
int n = 100;
void choix() {

	while (n > 4) {
		cout << "Choisir ce que vous voulez faire (1-4)" << '\n';
		cin >> n;
		}

	}

void menu() {

	cout << "1. Nouvelle Partie" << '\n';
	cout << "2. Reprendre Partie" << '\n';
	cout << "3. Partie en Ligne" << '\n';
	cout << "4. Options" << '\n';

}

void message() {
	switch (n) {

	case 1:
		cout << "Demarrage d'une nouvelle aventure solo" << '\n';

		break;
	case 2:
		cout << "Reprise de la dernière partie sauvegardee" << '\n';

		break;
	case 3:
		cout << "Connection en cours... ... ..." << '\n';

		break;
	case 4:
		cout << "Menu options" << '\n';

		break;

	}


}

int main()
{

	menu();
	choix();
	message();





	return 0;
}

