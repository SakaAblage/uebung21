#include <stdio.h>
#include "physikFormeln.h"

//=========
//TODO
//=========
//ABFANGEN VON FALSCHEN WERTEN


double berechneGeschwindigkeit(void) 
{
	//Benutzereingabe fuer Weg s
	printf("Bitte geben Sie den Startpunkt in Metern an: ");
	scanf("%i", &startWeg);
	printf("Bitte geben Sie den Endpunkt in Metern an: ");
	scanf("%i", &endWeg);
	
	//Berechnen von delta Weg s
	Weg = endWeg - startWeg;
	
	//Benutzereingabe fuer Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);
	
	//Berechnung von delta Zeit t
	Zeit = endZeit - startZeit;
	
	//Berechnung der Geschwindigkeit v
	Geschwindigkeit = Weg / Zeit;
	
	//Ausgabe der Geschwindigkeit v
	printf("Die Geschwindigkeit betraegt %i km/h"), &Geschwindigkeit;
	
}

double berechneBeschleunigung(void)
{
	//Benutzereingabe fuer Geschwindigkeit v
	printf("Bitte geben Sie die Startgeschwindigkeit in km/h an: ");
	scanf("%i", &startGeschwindigkeit);
	printf("Bitte geben Sie die Endgeschwindigkeit in km/h an: ");
	scanf("%i", &endGeschwindigkeit);
	
	//Berechnen von delta Geschwindigkeit v
	Geschwindigkeit = endGeschwindigkeit - startGeschwindigkeit;
	
	//Benutzereingabe fuer Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);
	
	//Berechnung von delta Zeit t
	Zeit = endZeit - startZeit;
	
	//Berechnung der Beschleunigung a
	Beschleunigung = Geschwindigkeit / Zeit;

	//Ausgabe  der Beschleunigung a
	printf("Die Beschleunigung betraegt %i km/h"), &Beschleunigung;
}

double berechneImpuls(void)
{
	//Benutzereingabe fuer Masse und Geschwindigkeit
	printf("Bitte geben Sie die Masse in kg an: ");
	scanf("%i", &Masse);
	printf("Bitte geben Sie die Geschwindigkeit in km/h an: ");
	scanf("%i", &Masse);
	
	//Berechnung des Impulses
	Impuls = Masse * Geschwindigkeit;
	
	//Ausgabe des Impulses
	printf("Der Impuls betraegt %i"), &Impuls;
}
double berechneggB(void)
{
	//Benutzereingabe fuer Weg s
	printf("Bitte geben Sie den Startpunkt in Metern an: ");
	scanf("%i", &startWeg);
	printf("Bitte geben Sie den Endpunkt in Metern an: ");
	scanf("%i", &endWeg);
	
	//Benutzereingabe fuer Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);

	//Berechnen von delta Weg s
	Weg = endWeg - startWeg;
	
	//Berechnung der gleichfoermigen geradlinigen Bewegung
	gleichfoermigengeradlinigenBewegung = Weg - Geschwindigkeit*(endZeit-startZeit);

	//Ausgabe  gleichfoermigen geradlinigen Bewegung
	printf("Der Weg betraegt %i m"), &gleichfoermigengeradlinigenBewegung; //Meter?
}

double berechnegbgBWeg(void)
{
	//Benutzereingabe fuer Weg s
	printf("Bitte geben Sie den Startpunkt in Metern an: ");
	scanf("%i", &startWeg);
	printf("Bitte geben Sie den Endpunkt in Metern an: ");
	scanf("%i", &endWeg);
	
	//Benutzereingabe fuer Geschwindigkeit v
	printf("Bitte geben Sie die Startgeschwindigkeit in km/h an: ");
	scanf("%i", &startGeschwindigkeit);
	printf("Bitte geben Sie die Endgeschwindigkeit in km/h an: ");
	scanf("%i", &endGeschwindigkeit);

	//Benutzereingabe der Beschleunigung a
	printf("Bitte geben Sie die Beschleunigungin Metern in km/h an: ");
	scanf("%i", &Beschleunigung);

	//Berechnen von delta Weg s
	Weg = endWeg - startWeg;

	//Berechnung des Weges der gleichfoermigen geradlinigen Bewegung
	gleichmaessigbeschleunigtengeradlinigenBewegungWeg = Weg - ((endGeschwindigkeit*endGeschwindigkeit-startGeschwindigkeit*startGeschwindigkeit)/2*Beschleunigung);

	//Ausgabe  gleichfoermigen geradlinigen Bewegung
	printf("Die Geschwindigkeit betraegt %i km/h"), &gleichmaessigbeschleunigtengeradlinigenBewegungWeg;
}

double berechnegbgBGeschwindigkeit(void)
{
	//Benutzereingabe fuer Geschwindigkeit v
	printf("Bitte geben Sie die Startgeschwindigkeit in km/h an: ");
	scanf("%i", &startGeschwindigkeit);
	printf("Bitte geben Sie die Endgeschwindigkeit in km/h an: ");
	scanf("%i", &endGeschwindigkeit);

	//Benutzereingabe der Beschleunigung a
	printf("Bitte geben Sie die Beschleunigungin Metern in km/h an: ");
	scanf("%i", &Beschleunigung);

	//Benutzereingabe fuer Zeit t
	printf("Bitte geben Sie den Startzeitpunkt in Sekunden an: ");
	scanf("%i", &startZeit);
	printf("Bitte geben Sie den Endzeitpunkt in Sekunden an: ");
	scanf("%i", &endZeit);

    //Berechnung der Geschwindigkeit der gleichfoermigen geradlinigen Bewegung
	gleichmaessigbeschleunigtengeradlinigenBewegungGeschwindigkeit = endGeschwindigkeit - Beschleunigung * (endZeit - startZeit) + startGeschwindigkeit;

	//Ausgabe  gleichfoermigen geradlinigen Bewegung
	printf("Die Geschwindigkeit betraegt %i km/h"), &gleichmaessigbeschleunigtengeradlinigenBewegungGeschwindigkeit;
}