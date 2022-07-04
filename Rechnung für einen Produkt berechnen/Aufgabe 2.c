#include <stdio.h>

int main()
{
	//Variabl
	float Nettopreis;
	
	//Input
	printf("Schreiben Sie den Preis : ");
	scanf("%f", &Nettopreis);
	
	//Netto berechnung
	float MwSt = Nettopreis*0.2;
	printf("Nettopreis                Euro %.2f",Nettopreis );
	printf("\n+ 20%% MwSt                Euro %.2f",MwSt );
	printf("\n======================================");
	
	//Brutto berechnung
	float Bruttopreis = Nettopreis + MwSt;	
	printf("\nBruttopreis               Euro %.2f",Bruttopreis );
	
	//Skonto berechnung
	float Skonto = Bruttopreis * 0.02;
	printf("\n-2%% Skonto                Euro %.2f",Skonto );
	printf("\n======================================");
	
	//Rechnungsbetrag berechnung
	float Rechnungsbetrag = Bruttopreis-Skonto;
	printf("\nRechnungsbetrag           Euro %.2f",Rechnungsbetrag );
}


