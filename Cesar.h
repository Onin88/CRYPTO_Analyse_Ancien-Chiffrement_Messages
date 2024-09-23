/**
 *\file Cesar.h
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Bibliotheque des fonctions de chiffrement/dechiffrement de Cesar.
 */

#ifndef CESAR_H
#define CESAR_H

#include <stdio.h>
#include <stdlib.h>
#include "fonctionsDeBase.h"
#include "Espion.h"


/**
 *\brief Chiffrement d'une chaine de caractère à l'aide d'une clef d'une façon de chiffrement Cesar
 *\param message Message (chaine de caractère) qui sera chiffré
 *\param clef clef de chiffrement de Cesar
 *\return une chaine de caractère chiffré avec la méthode Cesar
 */

char* chiffrementCesar(char* message, char clef);


/**
 *\brief Déchiffrement d'une chaine de caractère à l'aide d'une clef d'une façon de chiffrement Cesar
 *\param message Message (chaine de caractère) qui sera chiffré
 *\param clef clef de déchiffrement/chiffrement de Vigenere
 *\return une chaine de caractère déchiffré avec la méthode Cesar
 */

char* dechiffrementCesar(char* message, char clef);

#endif
