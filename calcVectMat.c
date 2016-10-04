#include <stdio.h>

typedef float * VecteurType;

void afficherVecteur(VecteurType vecteur, int ordre);
VecteurType lireVecteurDeFichier(const char * nom_fichier, int * p_ordre);
float produitScalaire(VecteurType vecteur1, VecteurType vecteur2, int ordre);
void libererVecteur(VecteurType * p_vecteur);

int main(){
	float tab[] = {1.1,2.3};
	VecteurType v1 = tab;

	afficherVecteur(v1,2);

	return 0;
}

void afficherVecteur(VecteurType vecteur, int ordre){
	int i;
	printf("\n(");
	for(i=0;i<ordre;i++){
		printf("%f,",vecteur[i]);
	}
	printf(")");
}

VecteurType lireVecteurDeFichier(const char * nom_fichier, int * p_ordre){

	return NIL;
}

float produitScalaire(VecteurType vecteur1, VecteurType vecteur2, int ordre){

	return 0;
}

void libererVecteur(VecteurType * p_vecteur){

}
