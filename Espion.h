/**
 *\file Espion.h
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Bibliothèque des fonctions déchiffrants les chiffrements
 */

#ifndef ESPION_H
#define ESPION_H

#include <stdio.h>
#include <stdlib.h>
#include "fonctionsDeBase.h"
#include "Cesar.h"
#include <sys/stat.h>
#include <string.h>

/**
 *\brief Déchiffrement Cesar en trouvant la clef grâce à un tableau de fréquence
 *\param texte chaine de caractère qui sera déchiffré façon Cesar
 *\return une chaine de caractère déchiffré avec la méthode Cesar sans clef
 */

char* casser_cesar(char* texte);


/**
 *\brief Déchiffrement Vigenere en trouvant la clef grâce à casser_cesar
 *\param texte chaine de caractère qui sera déchiffré façon Vigenere
 *\param tailleClef entier qui donne la taille de la clef de dechiffrement
 *\return une chaine de caractère déchiffré avec la méthode Vigenere sans clef
 */
 
char* casser_vigenere_avec_clef(char* texte, int tailleClef);

#endif