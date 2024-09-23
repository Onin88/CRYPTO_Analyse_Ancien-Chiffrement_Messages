/**
 *\file Espion.c
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Fonctions décryptant les chiffrements Cesar et Vigenere sans clé (en la trouvant) comme un hacker
 */

#include <stdlib.h>
#include <stdio.h>
#include "Espion.h"

/**
 *\brief Déchiffrement Cesar en trouvant la clef grâce à un tableau de fréquence
 *\param texte chaine de caractère qui sera déchiffré façon Cesar
 *\return une chaine de caractère déchiffré avec la méthode Cesar sans clef
 */

char* casser_cesar(char* texte){
    //char* message = calloc(1, sizeof(char*)); //alloue un tableau de char(chaine de caractère).
    int cnb = 0; //la 1ère valeur sera la plus grande dès le debut. 
    int* tab = tableau_frequence(texte);
    char c = 97;
    for(int i = 0; i < 26; i++){ // on parcourt le tableau.
        if(tab[i] <= tab[i+1]){ //si la valeur i est <= à la valeur i+1.
            cnb = i+1; // alors cnb prends la position de la valeur i+1.
        }
    }
    c = cnb + 97; //position de cnb + 97 (= a) et cela donne le code en unicode de la valeur la plus fréquente.
    if(c < 101){
        c = ((c-101)+26)+97; // en supposant que c'est la lettre e est la plus fréquente.
    }else{
        c = ((c-101)-1)+97; // ca donne la clé de déchiffrement.
    }
    
    char* message = dechiffrementCesar(texte, c); //dechiffrement avec la clé.
    return message;
}


/**
 *\brief Déchiffrement Vigenere en trouvant la clef grâce à casser_cesar
 *\param texte chaine de caractère qui sera déchiffré façon Vigenere
 *\param tailleClef entier qui donne la taille de la clef de dechiffrement
 *\return une chaine de caractère déchiffré avec la méthode Vigenere sans clef
 */

char* casser_vigenere_avec_clef(char* texte, int tailleClef){
    int compteur = 0;
    int n = tailleClef;
    int r = taille(texte);
    char* chaine = malloc(r*sizeof(char));
    char* cesar = malloc(r*sizeof(char));
    int h = taille(chaine);
    char* rep = malloc(r*sizeof(char));
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < (int) r/n ; j++){
            chaine[compteur] = texte[i+(n*j)];
            cesar[j] = chaine[compteur];
            compteur++;
        }
        rep = strcpy(rep, casser_cesar(cesar));
    }

    return rep;
}