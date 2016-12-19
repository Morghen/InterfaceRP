#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <limits>

using namespace std;


int DiceRoll(int nb);

int res, nbface;

void Rolls()
{
	while(1)
	{
		cout << "*** Jets de dés ***" << endl;
		cout << "1. Dés à 6 faces" << endl;
		cout << "2. Dés à 10 faces" << endl;
		cout << "3. Dés à 20 faces" << endl;
		cout << "4. Dés à 100 faces" << endl;
		cout << "5. Dés custom" << endl;
		cout << "6. Menu précédent" << endl << endl;
		cout << "Votre choix : ";
		int ch;
		cin >> ch;
		switch(ch)
		{
			case 1:
				res = DiceRoll(6);
				cout << "Resultat = " << res << endl << endl;
				break;
			case 2:
				res = DiceRoll(10);
				cout << "Resultat = " << res << endl << endl;
				break;
			case 3:
				res = DiceRoll(20);
				cout << "Resultat = " << res << endl << endl;
				break;
			case 4:
				res = DiceRoll(100);
				cout << "Resultat = " << res << endl << endl;
				break;
			case 5:
				cout << "Nombre de faces ? ";
				cin >> nbface;
				res = DiceRoll(nbface);
				cout << "Resultat = " << res << endl << endl;
				break;
			case 6:
				return;
			default:
				cin.clear(); // effacer les bits d'erreurs 
				cin.ignore( numeric_limits<streamsize>::max(), '\n' ); // supprimer la ligne erronée dans le buffer
		}
	}
}





int DiceRoll(int nb)
{
	int seed;
	long tps;
	seed = time(&tps);
	srand(seed);
	res = (rand() % nb) + 1;
	return res;
}
