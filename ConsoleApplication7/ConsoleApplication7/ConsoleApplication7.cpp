// ConsoleApplication7.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;
float nombre;
void bonjour();













int main()
{
	cout << "saisir un nombre a virgule" << '\n';
	cin >> nombre;
	bonjour();
	cout << "le carre de votre nombre est" << nombre << '\n';
	return 0;
}

void bonjour()
{

	nombre= pow(nombre, 2);

}