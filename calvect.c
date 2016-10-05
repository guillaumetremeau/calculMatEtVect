#include <stdio.h>
#include <stdlib.h>

void afficherVecteur(VecteurType vecteur, int ordre){
	int i;
	printf("\n(");
	for(i=0;i<ordre;i++){
		printf("%f,",vecteur[i]);
	}
	printf(")");
}

VecteurType lireVecteurDeFichier(const char * nom_fichier, int * p_ordre){
	FILE* fichier = NULL;
	int i;
	VecteurType v = NULL;
	fichier = fopen(nom_fichier,"r");

	if (fichier != NULL){
		fscanf(fichier,"%d",p_ordre);
		v = (VecteurType) malloc(sizeof(float) * (*p_ordre));
		if(v){
			for(i=0;i<*p_ordre;i++){
				fscanf(fichier, "%f",v+i);
			}
		}
		fclose(fichier);
	}
	else{
		printf("\nImpossible d'ouvrir le fichier test.txt\n");
	}

	return v;
}

float produitScalaire(VecteurType vecteur1, VecteurType vecteur2, int ordre){
	int i; 
	float res;
	res = 0;
	for(i=0;i<ordre;i++){
		res += *(vecteur1+i) * *(vecteur2+i);
	}
	return res;
}

void libererVecteur(VecteurType * p_vecteur){
	free(*p_vecteur);
	*p_vecteur = NULL;
}
