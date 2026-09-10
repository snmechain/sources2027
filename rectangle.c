// Structures.cpp : Ce fichier contient la fonction 'main'.
// Il démontre l'utilisation des structures en C pour représenter un rectangle,
// ainsi que l'allocation dynamique de mémoire.

#include <stdio.h>
#include <malloc.h>

// Fonction pour calculer le périmètre d'un rectangle
// Paramètres : longueur et largeur du rectangle
// Retourne : le périmètre calculé
int perimetre(int longueur, int largeur) {
    return 2 * (longueur + largeur);
}

int main() {
    printf("Démonstration de l'utilisation des structures\n");

    // Déclaration de la structure Rectangle
    // Cette structure représente un rectangle avec :
    // - x, y : coordonnées du coin haut-gauche
    // - longueur, largeur : dimensions du rectangle
    struct Rectangle {
        int x, y;               // Coordonnées du coin haut-gauche
        int longueur, largeur;  // Dimensions du rectangle
    };

    // Déclaration des variables et pointeurs
    struct Rectangle rect1;               // Un rectangle statique
    struct Rectangle rect[1000];          // Tableau de 1000 rectangles
    struct Rectangle* pRectangle;         // Pointeur vers un rectangle
    int* pEntier;                         // Pointeur vers un entier
    int i;                                // Variable de boucle

    // Initialisation du rectangle statique rect1
    rect1.longueur = 12;
    rect1.largeur = 3;
    rect1.x = 0;
    rect1.y = 0;

    // Affichage des informations de rect1
    printf("Le rectangle aux coordonnées x=%d et y=%d a une longueur de %d et une largeur de %d\n",
           rect1.x, rect1.y, rect1.longueur, rect1.largeur);

    // Initialisation et affichage des rectangles dans le tableau rect[1000]
    for (i = 0; i < 1000; i++) {
        rect[i].longueur = i * 2;  // Longueur proportionnelle à l'indice
        rect[i].largeur = i;       // Largeur égale à l'indice
        rect[i].x = i;             // Coordonnée x égale à l'indice
        rect[i].y = i;             // Coordonnée y égale à l'indice

        printf("Le rectangle aux coordonnées x=%d et y=%d a une longueur de %d et une largeur de %d\n",
               rect[i].x, rect[i].y, rect[i].longueur, rect[i].largeur);
    }

    // Allocation dynamique de mémoire
    pEntier = (int*)malloc(sizeof(int));  // Alloue un entier
    pRectangle = (struct Rectangle*)malloc(sizeof(struct Rectangle));  // Alloue un rectangle

    // Initialisation des valeurs allouées dynamiquement
    pRectangle->longueur = 12;
    pRectangle->largeur = 3;
    pRectangle->x = 0;
    pRectangle->y = 0;

    *pEntier = 10;  // Affecte une valeur à l'entier alloué

    // Libération de la mémoire allouée dynamiquement
    free(pEntier);
    free(pRectangle);

    return 0;
}
