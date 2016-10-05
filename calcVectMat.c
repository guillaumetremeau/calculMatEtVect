#include <stdio.h>
#include <stdlib.h>
#include "calvect.h"

int main(){
	float tab[] = {1.1,2.3};
	int * ordre;
	VecteurType v1 = tab;
	VecteurType v2,v3;
	ordre = (int *) malloc(sizeof(int));
	afficherVecteur(v1,2);

	printf("\n------------------------\n");

	v2 = lireVecteurDeFichier("test.txt",ordre);
	afficherVecteur(v2,*ordre);
	v3 = lireVecteurDeFichier("v3.txt",ordre);
	printf("\n------------------------\n");

	printf("Résultat : %f",produitScalaire(v2,v3,*ordre));
	printf("\n------------------------\n");
	libererVecteur(&v2);
	printf("\n------------------------\n");
	return 0;
}
