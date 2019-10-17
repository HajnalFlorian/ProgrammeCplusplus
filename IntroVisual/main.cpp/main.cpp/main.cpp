#include <iostream>
#include <cmath>
#include<stdlib.h>
using namespace std; //si retirer cin et cout ne fonctionne plus

//Exemple de programme en C ++



int main()
{

	int i = 0;
	float x = 0.0;
	float racx = 0.0;

	const int NFOIS = 5;


	std::cout << "bonjour\n"; // pour rendre cout fonctionnelle sans using namespace std ecrire std :: cout
	cout << "Je vais vous calculer " << NFOIS << " racines carrees\n";// cout affiche

	// boucle for qui demande et calcul fois une racine carrée 
	for (i = 0; i < NFOIS; i++) {

		cout << "Donnez un nombre : ";
		cin >> x; //cin permet une entrer utilisateur 


		if (x < 0.0)

			cout << "Le nombre" << x << "ne possede pas de racine carree\n";
		else {
			racx = sqrtf(x); //sqrtf est intégrer a cmath pour calculer la racine carrée
			cout << "Le nombre " << x << " a pour racine carree " << racx << endl;
		}
	}

	cout << "Travail Termine" << endl;
	system("pause");


	return 0;
}
