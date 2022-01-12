#include "../types.h"
#define KGRN "\x1B[32m"

void ajouterOuvrage(POuvrage *head, char *cote, char *titre, int totalExemplaires, int exemplairesEmpreuntes)
{
    POuvrage newElement;
    newElement = (POuvrage)malloc(sizeof(Ouvrage));
    newElement->cote = cote;
    newElement->titre = titre;
    newElement->totalExemplaires = totalExemplaires;
    newElement->exemplairesEmpreuntes = exemplairesEmpreuntes;
    if (*head == NULL)
    {
        *head = newElement;
    }
    else
    {
        POuvrage temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newElement;
    }
}

void afficherTousOuvrages(POuvrage head)
{
    while (head != NULL)
    {
        printf("%s - %s  %s\n", head->titre, head->cote, KGRN);
        head = head->next;
    }
}
