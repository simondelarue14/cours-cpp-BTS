// ConsoleApplication8.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;
int short nombre1;
int short nombre2;

void lequel()
{
	if (nombre1 < nombre2) {
		
		cout << "le nombre 1 est le plus petit" << '\n';
	}
	else
	{

		cout << "le nombre 2 est le plus petit" << '\n';
	}

}


int main()
{
	cout << "saisir le nombre 1" << '\n';
	cin >> nombre1;
	cout << "saisir nombre 2" << '\n';
	cin >> nombre2;
	lequel();
	return 0;
}

