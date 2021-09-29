#include <stdio.h>
#include "cours4.h"
int getMax(int a, int b) {
    /* Fonction qui prend deux entiers en paramètres et qui retourne le plus grand des deux.
    * Paramètres :
    * - IN : a,b les nombres (entier) qu'on veut comparer.
    * - OUT : le plus grand des 2 entiers.
    */
    if (a > b) {
        printf("%d", a);
    } else if (b > a) {
        printf("%d", b);
    } else {
        printf("%d", a);
    }
    return 0;
}
int saisirEntier() {
    /* Fonction qui demande de saisir un entier et l'attribue à une variable
    * Paramètres :
    * - IN : rien
    * - OUT : l'entier saisi
    */
    int n;
    printf("Saisir un entier :\n");
    scanf("%d",&n);
    return n;
}
int calculAire(int longueur, int largeur) {
    /* Fonction qui calcule l'aire d'un rectangle
    * Paramètres :
    * - IN : la largeur et la longueur du rectangle.
    * - OUT : l'aire du rectangle.
    */
    return longueur * largeur;
}
int calculPerimetre(int longueur, int largeur) {
    /* Fonction qui calcule le perimetre d'un rectangle
    * Paramètres :
    * - IN : la largeur et la longueur du rectangle.
    * - OUT : le perimetre du rectangle.
    */
    return (longueur + largeur)*2;
}
int multiple(int nombre1, int nombre2) {
    /* Fonction qui cherche si le premier nombre est multiple du deuxieme.
    * Paramètres :
    * - IN : les 2 nombres.
    * - OUT : 1 s'il est multiple, 0 s'il ne l'est pas.
    */
    if (nombre1%nombre2==0) {
        return 1;
    }
    else {
        return 0;
    }
}
float calculMoyenne(int note1, int note2, int note3) {
    /* Fonction qui calcule la moyenne de 3 notes.
    * Paramètres :
    * - IN : les 3 notes.
    * - OUT : leur moyenne.
    */
    if (note1 < 0 || note1 > 20 || note2 < 0 || note2 > 20 || note3 < 0 || note3 > 20) {
        return -1;
    }
    else {
        float moyenne = (note1+note2+note3)/3.0;
        return moyenne;
    }
}
int calculEleves(int nbClasse) {
    /* Fonction qui calcule le nb d'eleves dans une ecole
    * Paramètres :
    * - IN : le nb de classe dans l'ecole.
    * - OUT : le nb total d'eleves.
    */
    int i=1;
    int nbEleves=0, totalEleves=0;
    for (i = 1; i<=nbClasse; i++)
    {
        printf("Saisir le nombre d'éleves de la classe %d",i);
        scanf("%d",&nbEleves);
        totalEleves=totalEleves+nbEleves;
    }
    return totalEleves;
}
int calculEtage(int pierre) {
    /* Fonction qui calcule le nb d'etages que l on peut construire selon les pierres.
    * Paramètres :
    * - IN : le nb de pierre
    * - OUT : le nb d'etages que l on peut construire
    */
    int x=1,y=0;
    while (pierre >= (x * x) + y) {
        if (pierre == (x * x) + y) {
            printf("Il est possible de construire %d étages\n", x);
        }
        y = y + (x * x);
        x = x + 1;
    }
    printf("Il est possible de construire %d étages\n", x - 1);
    return 0;
}





