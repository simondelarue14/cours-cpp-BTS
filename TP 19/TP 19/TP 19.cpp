

#include "pch.h"
#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	Personne un;
	Personne deux(6,"jeanmi");
	Personne trois(700, "la vieille sorciere");
	cout << un.info() << endl;
	cout << deux.info() << endl;
	cout << trois.info() << endl;
	system("pause");
	return 0;
}
