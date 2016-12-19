#include <iostream>
#include <stdlib.h>
#include "Rolls.h"
#include "ClassManager.h"
#include "SkillsManager.h"

using namespace std;

int main()
{
	while(1)
	{
		cout << "*** Menu principal ***" << endl << endl;
		cout << "1. Jets de dés" << endl;
		cout << "2. Gestion des classes" << endl;
		cout << "3. Gestion des compétences" << endl;
		cout << "4. Quitter" << endl << endl;
		cout << "Votre choix : ";
		int ch;
		cin >> ch;
		switch(ch)
		{
			case 1:
				Rolls();
				break;
		
			case 2:
				ClassManager();			
				break;
		
			case 3:
				SkillsManager();
				break;
			case 4:
				exit(1);
		}
	}
}
