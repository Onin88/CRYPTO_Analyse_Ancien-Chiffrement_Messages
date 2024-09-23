/**
 *\file Cesar_test.c
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Fonctions de test de Cesar.
 */

#include <stdlib.h>
#include <stdio.h>
#include "Cesar.h"


int main(int argc, char* argv[]){
    char message[] = "AABéCDE";
    char* texte = chiffrementCesar(message, 'c');
    char t[] = "DDEéFGH";

    if(comparaison(texte, t) == 1){
        printf("La fonction chiffrementCesar marche\n");
    }else{
        printf("La fonction chiffrementCesar ne marche pas\n");
    }
}