#include <stdio.h>
#include "cours4.h"
#include "Exercice.h"
int Exercice1() {
    int entier1=0, entier2=0;
    printf("Entrez les valeurs de entier1 et entier2 :\n");
    scanf("%d %d", &entier1, &entier2);
    getMax(entier1,entier2);
    return 0;
}
int Exercice2() {
    saisirEntier();
    return 0;
}
int Exercice3() {
    int longueur=saisirEntier();
    int largeur=saisirEntier();
    printf("L'aire du rectangle est de %d cm carré \n",calculAire(longueur,largeur));
    printf("Le perimetre du rectangle est de %d cm \n",calculPerimetre(longueur,largeur));
    return 0;
}
#define NOMBRE 10
int Exercice4() {
    int t=saisirEntier();
    if (multiple(t ,3)==1) {
        printf("%d est un multiple de 3 \n",t);
    }
    else {
        printf("%d n'est pas un multiple de 3 \n", t);
    }
    if (t >= NOMBRE) {
        printf("%d est superieur ou egal à 10 \n",t);
    }
    else {
        printf("%d est inferieur à 10 \n",t);
    }
    return 0;
}
int Exercice5() {
    int note1=saisirEntier();
    int note2=saisirEntier();
    int note3=saisirEntier();
    if ( calculMoyenne(note1,note2,note3)>=0 || calculMoyenne(note1,note2,note3)<=20) {
        printf("La moyenne des notes est %f", calculMoyenne);
    }
    else {
        printf("il faut saisir des notes entre 0 et 20");
    }
    return 0;
}
int Exercice7() {
    int nbClasse=saisirEntier();
    int p=calculEleves(nbClasse);
    printf("le nombre total d'éleves est %d",p);
    return 0;
}
int Exercice8() {
    int j=0;
    do {
        printf("saisir un entier à la fois multiple de 7 et multiple de 2:\n");
        j=saisirEntier();
    }
    while( !(j % 2 == 0 && j % 7 == 0) );
    printf("%d est un multiple de 2 et de 7",j);
    return 0;
}
int Exercice9(){
    int pierre = 0;
    printf("Saisir le nombre de pierres disponible:\n");
    pierre=saisirEntier();
    char q= calculEtage(pierre);
    return q;
}
int Exercice10(){
    int r=0,o=0,t=0;
    while (r>=0) {
        printf("Saisir un entier positif:\n");
        r= saisirEntier();
        if (r<0)
        {
            float v=t;
            float z=o;
            printf("La moyenne des nombres saisis est %f",v/z);
            return 0;
        }
        t = t+r;
        o = o+1;
    }
    return 0;
}
// Created by Amine Zekhnini on 29/09/2021.
//

