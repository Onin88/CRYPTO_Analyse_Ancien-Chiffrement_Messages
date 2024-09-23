/**
    *\file fonctionsDeBase.c
    *\author DURHAM Patrick, BELUCHE Quentin
    *\brief Les fonctions de base du tp.
*/
#include <stdlib.h>
#include <stdio.h>
#include "fonctionsDeBase.h"
#include <sys/stat.h>
/**
    *\brief  renvoie la taille d'une chaine de caractères.
    *\param  texte chaine de caractère, texte est le message d'ont on veut voir la taille.
    *\return taille, renvoie la taille du message qui est dans texte.
*/
int taille(char* texte){
    int taille = 0;
    int i = 0;
    while(texte[i] != '\0'){ // tant qu'on arrive pas à la fin de la phrase
        taille++;
        i++;
    }
    return taille;
}
/**
    *\brief vérifie si le caractère est chiffrable c'est a dire entre a et z, dit aussi si c'est une majuscule ou minuscule
    *\param cara caractère, cara est la lettre qu'on vérifie si elle est chiffrable ou majuscule
    *\return retourne 1 si la lettre est une minuscule et 2 si la lettre est une majuscule ou 0 si c'est aucun des deux
*/
int estChiffrable(char cara){
    if(cara >= 97 && cara <= 122){ //si entre a et z
        return 1;
    }
    if(cara >= 65 && cara <= 96){ // si entre A et Z
        return 2;
    }
    return 0;
}
/**
    *\brief  vérifie quel est la lettre la plus fréquente dans la chaine de caractère 
    *\param texte chaine de caractère, tableau de caractère dans lequel se trouve le texte que l'on veut examiner
    *\return tab retourne une chaine de caractère avc les lettres les plus fréquents en premier
*/
int* tableau_frequence(char* texte){
    int* tab = malloc(sizeof(int)*26); // alloue un tableau de taille 26
    int i = 0;
    for(int i = 0; i < taille(texte); i++){
        if(estChiffrable(texte[i]) == 1){ // pour minuscule
            tab[texte[i] - 97]++;
        }
        if(estChiffrable(texte[i]) == 2){ // pour majuscule
            tab[texte[i] - 65]++;
        }
    }
    return tab;
}
/**
    *\brief va chercher du texte dans un fichier et le met dans une chaine de caractère.
    *\param nomFichier chaine de caractère, tableau dans lequel on met le texte du fichier.
    *\return chaine, retourne le texte qui était dand le fichier dans une chaine de caractère .
*/
char* lecture(char* nomFichier){
    char* chaine =(char*) malloc(5000*sizeof(char)) ;
    char c;
    int i = 0;
    FILE *f = fopen(nomFichier, "r");
    if(f == NULL){
        perror("Le fichier/répertoire n'existe pas");
        exit(1);
    }
    while((c=fgetc(f)) != EOF){
        chaine[i] = c;
        i++;
    }
    fclose(f);
    return chaine;
} 
/**
    *\brief compare deux tableau et regarde si ils sont égaux.
    *\param message chaine de caractère, un des tableaux a comparer.
    *\param message2 chaine de caractère, un des tableaux a comparer.
    *\return retour 1 si les tableaux sont égaux retourne 0 si ils ne le sont pas.
*/
int comparaison(char* message, char* message2){ // 0 pour pas égaux, 1 pour egaux
    int t = taille(message);
    int t2 = taille(message2);
    if(t != t2){
        return 0;
    }
    for(int i = 0; i < t; i++){
        if(message[i] != message2[i]){
            return 0;
        }
    }
    return 1;
}

