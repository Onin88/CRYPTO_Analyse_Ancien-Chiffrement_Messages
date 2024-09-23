/**
 *\file Cesar.c
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Fonctions de chiffrement/dechiffrement de cryptage "Cesar".
 */

#include <stdlib.h>
#include <stdio.h>
#include "Cesar.h"

/**
 *\brief Chiffrement d'une chaine de caractère à l'aide d'une clef d'une façon de chiffrement Cesar
 *\param message Message (chaine de caractère) qui sera chiffré
 *\param clef clef de chiffrement de Cesar
 *\return une chaine de caractère chiffré avec la méthode Cesar
 */

char* chiffrementCesar(char* message, char clef){
    int t = taille(message);
    if(estChiffrable(clef) == 1){// si minuscule
        clef = clef - 96;
    }else if(estChiffrable(clef) == 2){// si majuscule
        clef = clef - 64;
    }else{
        printf("Votre clef n'est pas chiffrable\n");
        exit;
    }
    for(int i = 0; i < t; i++){
        if(estChiffrable(message[i]) == 1){ //minuscule
            message[i] = (message[i] + clef); 
        }else if(estChiffrable(message[i]) == 2){//majuscule
            message[i] = (message[i] + clef);
        }
    }
    return message;
}


/**
 *\brief Déchiffrement d'une chaine de caractère à l'aide d'une clef d'une façon de chiffrement Cesar
 *\param message Message (chaine de caractère) qui sera chiffré
 *\param clef clef de déchiffrement/chiffrement de Vigenere
 *\return une chaine de caractère déchiffré avec la méthode Cesar
 */

char* dechiffrementCesar(char* message, char clef){
    int t = taille(message);
    if(estChiffrable(clef) == 1){// si minuscule
        clef = clef - 96;
    }else if(estChiffrable(clef) == 2){// si majuscule
        clef = clef - 64;
    }else{
        printf("Votre clef n'est pas chiffrable");
        exit;
    }
    for(int i = 0; i < t; i++){
        if(estChiffrable(message[i]) == 1){ //minuscule
            message[i] = (message[i] - clef); 
            if (message[i] < 97){
                message[i] += 26;
            }
            }else if(estChiffrable(message[i]) == 2){//majuscule
            message[i] = (message[i] - clef);
            if (message[i] < 65){
                message[i] += 26;
            }
        }
    }
    return message;
}