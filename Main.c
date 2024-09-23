/**
    \file: Main.c
    \author: DURHAM Patrick, BELUCHE Quentin
    \brief: Le Main avc l'algorithme principal du TP
*/
#include <stdio.h>
#include <stdlib.h>
#include "Espion.h"
#include "Cesar.h"
#include "fonctionsDeBase.h"
#include "Vigenere.h"
/**
    *\brief le main du tp, contient les 3 cas de l'exercice 7 avc les paramètre -d,-c, et aucun paramètre
*/
int main(int argc, char* argv[]){

    printf("Votre commande : %s\n", argv[1]);
    printf("Votre nom de fichier : %s\n", argv[2]);
    printf("Votre clef : %s\n", argv[3]);

    printf("\n");

    if(argv[1] == "-c"){
        if(argv[3] == "1"){
            char* lec = lecture(argv[2]);
            char* rep = chiffrementCesar(lec, argv[3]);
        }
        else{
            char* lec = lecture(argv[2]);
            char* rep = chiffrer_vigenere(lec, argv[3]);
        }
        printf("Voici votre message chiffré : %s", rep);
    }else if(argv[1] == "-d"){
        if(argv[3] == "1"){
            char* lec = lecture(argv[2]);
            char* rep = dechiffrementCesar(lec, argv[3]);
        }
        else{
            char* lec = lecture(argv[2]);
            char* rep = dechiffrer_vigenere(lec, argv[3]);
        }
        printf("Voici votre message déchiffré : %s", rep);
    }else{
        
    }


}