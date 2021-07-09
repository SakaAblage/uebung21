#include <stdio.h>
#include <physikFormeln.h>

//=========
//TODO
//=========
//ABFANGEN VON FALSCHEN WERTEN


int berechneGeschwindigkeit(void) 
{
	//Benutzereingabe für Weg s
	printf("Bitte geben Sie den Startpunkt in Metern an: ");
	scanf("%i", &startWeg);
	printf("Bitte geben Sie den Endpunkt in Metern an: ");
	scanf("%i", &endWeg);
	
	//Berechnen von delta Weg s
	Weg = endWeg - startWeg;
	
	//Benutzereingabe für Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);
	
	//Berechnung von delta Zeit t
	Zeit = endZeit - startZeit;
	
	//Berechnung der Geschwindigkeit v
	Geschwindigkeit = Weg / Zeit;
	
	//Ausgabe der Geschwindigkeit v
	printf("Die Geschwindigkeit beträgt %i km/h"), &Geschwindigkeit;
	
}

int berechneBeschleunigung(void)
{
	//Benutzereingabe für Geschwindigkeit v
	printf("Bitte geben Sie die Startgeschwindigkeit in km/h an: ");
	scanf("%i, &startGeschwindigkeit);
	printf("Bitte geben Sie die Endgeschwindigkeit in km/h an: ");
	scanf("%i, &endGeschwindigkeit);
	
	//Berechnen von delta Geschwindigkeit v
	Geschwindigkeit = endGeschwindigkeit - startGeschwindigkeit;
	
	//Benutzereingabe für Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);
	
	//Berechnung von delta Zeit t
	Zeit = endZeit - startZeit;
	
	//Berechnung der Beschleunigung a
	Beschleunigung = Geschwindigkeit / Zeit;
	printf("Die Beschleunigung beträgt %i km/h"), &Beschleunigung;
}

int berechneImpuls(void)
{
	//Benutzereingabe für Masse und Geschwindigkeit
	printf("Bitte geben Sie die Masse in kg an: ");
	scanf("%i", &Masse,)
	printf("Bitte geben Sie die Geschwindigkeit in km/h an: ");
	scanf("%i", &Masse,)
	
	//Berechnung des Impulses
	Impuls = Masse * Geschwindigkeit
	
	//Ausgabe des Impulses
	printf("Der Impuls beträgt %i"), &Impuls; //WAS IST EIN IMPULS LOL
}