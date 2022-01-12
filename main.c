#include <stdio.h>
#include "entities/Ouvrage.c"
int main()
{
	printf("Ana projet ta3 TP , oumbaed chwiya nebda nekhdem");
	POuvrage tete = NULL;
	ajouterOuvrage(&tete, "a gauche", "hmed", 20, 10);
	ajouterOuvrage(&tete, "a gauche", "hmed1", 20, 10);
	ajouterOuvrage(&tete, "a droit", "hmed2", 20, 10);

	afficherTousOuvrages(tete);
	return 0;
}
