#include "pch.h"
#include <iostream>
#include "Personnage.h"
#include "Point.h"
using namespace std;


int main()
{
	Point a(12, 7);
	a.affiche();
	a.deplace(-4, 1);
	a.affiche();
	system("pause");
	return 0;

}
