.SILENT:
InterfaceRP:			main.cpp Rolls.o ClassManager.o SkillsManager.o
							echo InterfaceRP
							g++ main.cpp Rolls.o ClassManager.o SkillsManager.o -o InterfaceRP
					
Rolls.o:					Rolls.cpp Rolls.h
							echo Rolls.o
							g++ Rolls.cpp -c
					
ClassManager.o:		ClassManager.cpp ClassManager.h
							echo ClassManager.o
							g++ ClassManager.cpp -c
							
SkillsManager.o:		SkillsManager.cpp SkillsManager.h
							echo SkillsManager.o
							g++ SkillsManager.cpp -c
