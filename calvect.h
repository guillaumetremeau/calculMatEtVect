#include <stdio.h>
#include <stdlib.h>
#include "calvect.c"

typedef float * VecteurType;

void afficherVecteur(VecteurType, int);
VecteurType lireVecteurDeFichier(const char * , int * );
float produitScalaire(VecteurType, VecteurType, int);
void libererVecteur(VecteurType *);
