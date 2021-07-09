#include <stdio.h>
#include <physikFormeln.h>

void berechneGeschwindigkeit(void) 
{
	//Benutzereingabe für Weg
	printf("Bitte geben Sie den Startpunkt in Metern an: ");
	scanf("%i", &startWeg);
	printf("Bitte geben Sie den Endpunkt in Metern an: ");
	scanf("%i", &endWeg);
	
	//Berechnen von delta Weg
	Weg = endWeg - startWeg;
	
	//Benutzereingabe für Zeit
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);
	
	//Berechnung von delta Zeit
	Zeit = endZeit - startZeit;
	
	//Berechnung der Geschwindigkeit
	Geschwindigkeit = Weg / Zeit;
	
	//Ausgabe der Geschwindigkeit
	printf("Die Geschwindigkeit beträgt %i km/h"), &Geschwindigkeit;
	
	
