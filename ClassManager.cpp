#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "ClassManager.h"

using namespace std;


void ClassManager()
{
	while(1)
	{
		cout << "*** Gestion des classes ***" << endl;
		cout << "1. Classes de bases" << endl;
		cout << "2. Classes avancées" << endl;
		cout << "3. Créer une classe" << endl;
		cout << "4. Supprimer une classe personalisée" << endl;
		cout << "5. Menu précédent" << endl << endl;
		cout << "Votre choix : ";
		int ch;
		cin >> ch;
		switch(ch)
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
				exit(1);
		}
	}
}
