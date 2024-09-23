/**
    \file: Vigenere.c
    \author: DURHAM Patrick, BELUCHE Quentin
    \brief: Contient la fonction cryptage et decryptage de vigenere.
*/
#include <stdlib.h>
#include <stdio.h>
#include "Vigenere.h"

/**
    *\brief chiffre le message en mode vigenere
    *\param message chaine de caractère, le message que l'on va crypter
    *\param clef chaine de caractère, la clef avc laquel on va crypter le message
    *\return message, retourne le message chiffrer
*/
char* chiffrer_vigenere(char* message, char* clef){
    int i = 0;
    int z =0;
    int x =0;
    int temp = taille(clef);
    for (int j=0;j < temp;j++){
        if(estChiffrable(clef[j]) == 1){// si minuscule
            clef[j] = clef[j] - 96;
        }else if(estChiffrable(clef[j]) == 2){// si majuscule
            clef[j] = clef[j] - 64;
        }else{
            printf("Votre clef n'est pas chiffrable");
            exit;
        }
    }
    while(x != -1){
        for(z = 0; z < temp; z++){
            if (estChiffrable(message[i]) == 1){
                message[i] = message[i] + clef[z];
                if (message[i] > 122){
                    message[i] -= 26;
                }
            }
            if (estChiffrable(message[i]) == 2){
                message[i] = message[i] + clef[z];
                if (message[i] > 90){
                    message[i] -= 26;
                }
            }
            i++;
            if(message[i] == '\0'){
                x = -1;
            }
        }
        z = 0;
    }
    return message;
}
/**
    *\brief dechiffre le message en mode vigenere
    *\param message chaine de caractère, le message que l'on va decrypter
    *\param clef chaine de caractère, la clef avc laquel on va decrypter le message
    *\return message, retourne le message dechiffrer
*/
char* dechiffrer_vigenere(char* message, char* clef){
    int i = 0;
    int z =0;
    int x =0;
    int temp = taille(clef);
    for (int j=0;j < temp;j++){
        if(estChiffrable(clef[j]) == 1){// si minuscule
            clef[j] = clef[j] - 96;
        }else if(estChiffrable(clef[j]) == 2){// si majuscule
            clef[j] = clef[j] - 64;
        }else{
            printf("Votre clef n'est pas chiffrable");
            exit;
        }
    }
    while(x != -1){
        for(z = 0; z < temp; z++){
            if (estChiffrable(message[i]) == 1){
                message[i] = message[i] - clef[z];
                if (message[i] < 97){
                    message[i] += 26;
                }
            }
            if (estChiffrable(message[i]) == 2){
                message[i] = message[i] - clef[z];
                if (message[i] < 65){
                    message[i] += 26;
                }
            }
            i++;
            if(message[i] == '\0'){
                x = -1;
            }
        }
        z = 0;
    }
    return message;
}

