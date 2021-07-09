#include "physikFormeln.c"
#include "physikFormeln.h"

int main (void)
{
	int function = -1;
	
	while (function != 0)
	{
		printf("Funktion waehlen:\n");
		printf("1: Geschwindigkeit berechnen:\n");
		printf("2: Beschleunigung berechnen:\n");
		printf("3: Impuls berechnen:\n");
		printf("4: Gleichfoermig geradlinige Bewegung berechnen:\n");
		printf("5: Weg einer gleichmaessig beschleunigte geradlinige Bewegung berechnen:\n");
		printf("6: Geschwindigkeit einer gleichmaessig beschleunigte geradlinige Bewegung berechnen:\n");
		printf("0: Ende:\n");
	
		scanf("%d", &function),
		switch(function)
		{
			case 1: printf("Geschwindigkeit berechnen:\n");
			berechneGeschwindigkeit();
			break;
			case 2: printf("Beschleunigung berechnen:\n");
			berechneBeschleunigung();
			break;
			case 3: printf("Impuls berechnen:\n");
			berechneImpuls();
			break;
			case 4: printf("Gleichfoermig geradlinige Bewegung berechnen:\n");
			break;
			//NAME DER FUNKTION
			case 5: printf("Weg einer gleichmaessig beschleunigte geradlinige Bewegung berechnen:\n");
			//NAME DER FUNKTION
			break;
			case 6: printf("Geschwindigkeit einer gleichmaessig beschleunigte geradlinige Bewegung berechnen:\n");
			//NAME DER FUNKTION
			break;
			case 0: printf("Ende:\n");
			break;
			default: printf("Funktion nicht vorhanden\n");
		}
	}
	return 0;
}