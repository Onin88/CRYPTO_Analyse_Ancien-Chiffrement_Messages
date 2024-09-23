/**
    \file: Vigenere.c
    \author: DURHAM Patrick, BELUCHE Quentin
    \brief: Contient la fonction cryptage et decryptage de vigenere.
*/
#ifndef VIGENERE_H
#define VIGENERE_H

#include <stdio.h>
#include <stdlib.h>
#include "fonctionsDeBase.h"


/**
    *\brief chiffre le message en mode vigenere
    *\param message chaine de caractère, le message que l'on va crypter
    *\param clef chaine de caractère, la clef avc laquel on va crypter le message
    *\return message, retourne le message chiffrer
*/
char* chiffrer_vigenere(char* message, char* clef);
/**
    *\brief dechiffre le message en mode vigenere
    *\param message chaine de caractère, le message que l'on va decrypter
    *\param clef chaine de caractère, la clef avc laquel on va decrypter le message
    *\return message, retourne le message dechiffrer
*/
char* dechiffrer_vigenere(char* message, char* clef);

#endif