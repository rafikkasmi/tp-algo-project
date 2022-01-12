#include <stdlib.h>
/*
This file is used to define all the type we're going to use in our project
*/
//Type definition des ouvrages
typedef struct Ouvrage *POuvrage;
typedef struct Ouvrage
{
    char *cote;
    char *titre;
    int totalExemplaires;
    int exemplairesEmpreuntes;
    struct Ouvrage *next;
} Ouvrage;
