/**
    \file: fonctionsDeBase.h
    \author: DURHAM Patrick, BELUCHE Quentin
    \brief: Bibliothèque desfonctions de base du tp:
*/
#ifndef FONCTIONSDEBASE_H
#define FONCTIONSDEBASE_H
#include <stdio.h>
#include <stdlib.h>

/**
    *\brief  renvoie la taille d'une chaine de caractères.
    *\param  texte chaine de caractère, texte est le message d'ont on veut voir la taille.
    *\return taille, renvoie la taille du message qui est dans texte.
*/
int taille(char* texte);
/**
    *\brief vérifie si le caractère est chiffrable c'est a dire entre a et z, dit aussi si c'est une majuscule ou minuscule
    *\param cara caractère, cara est la lettre qu'on vérifie si elle est chiffrable ou majuscule
    *\return retourne 1 si la lettre est une minuscule et 2 si la lettre est une majuscule ou 0 si c'est aucun des deux
*/
int estChiffrable(char cara);
/**
    *\brief  vérifie quel est la lettre la plus fréquente dans la chaine de caractère 
    *\param texte chaine de caractère, tableau de caractère dans lequel se trouve le texte que l'on veut examiner
    *\return tab retourne une chaine de caractère avc les lettres les plus fréquents en premier
*/
int* tableau_frequence(char* texte);
/**
    *\brief va chercher du texte dans un fichier et le met dans une chaine de caractère.
    *\param nomFichier chaine de caractère, tableau dans lequel on met le texte du fichier.
    *\return chaine, retourne le texte qui était dand le fichier dans une chaine de caractère .
*/
char* lecture(char* nomFichier);

#endif