#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "fonctionsDeBase.h"

int main(int argc, char* argv[]){
    char texte[] = "ZAABCEEAAA"; 
    char c = 'a';
    if(taille(texte) != 10){
        printf("La fonction Taille ne marche pas\n");
    }else{
        printf("La fonction taille marche\n");
    }

    if(estChiffrable(c) == 1){
        printf("La fonction estChiffrable marche\n");
    }else{
        printf("La fonction estChiffrable marche pas\n");
    }

    int* tab = tableau_frequence(texte);
    for(int i = 0; i < 26; i++){
        printf(" Tab[%d] = %d\n", i, tab[i]);
    }

}
