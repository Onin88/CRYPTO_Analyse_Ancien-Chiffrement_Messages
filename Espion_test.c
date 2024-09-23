/**
 *\file Espion_test.c
 *\author DURHAM Patrick, BELUCHE Quentin
 *\brief Fonctions de test du module Espion.
 */

#include <stdlib.h>
#include <stdio.h>
#include "Espion.h"


int main(int argc, char* argv[]){

    char texteC[] = "O'zquahdxlfé ih Qrdwdush jvf xzj gslhjuenwé rwdzçmnvq uqrrzydzy à 1572, msqéh ih qd krzidfnrz gq o'zquahdxlfé ih Urzy-à-Ytxexrz, czl jvf wdfqekéwéj qs 1769 à Qmsfk hf uéwmgouj qs 1852. Enwgéq sdnqonsmqhyjqf à Qmsfk hf à Pqyc, hxqh ileurej p'lyuomswmylasv xséfuklczhe à Emw-xj-Pzf, Ednhk, Ésusdx, Rtunfft, Otvzjv-jw-Wryflz, Xzqéyuqoq, Eflzy-Marxi, Xdusw-Ilé-pjv-Arelhe, Efudjjgjpushe, Yfaéyuqoq hf Bgyc. Mgwlpntgjpqsw, hxqh f xj eydfzw ih lumsg éffexnvejpqsw (géfdjw sr 2011-1169 gg 22 vquwqredj 2011).";
    char clef = 'a'; // clef
    char* chiffre = chiffrementCesar(texteC, clef);

    char* texte = casser_cesar(texteC);// texte déchiffré
    char* t = dechiffrementCesar(texteC, clef);
    printf("casser_cesar : %s\n", texte);
    printf("dechiffreCesar : %s\n", t);
    if(comparaison(texte, t) == 1){
        printf("La fonction casser_cesar marche !!!!\n");
    }else{
        printf("La fonction casser_cesar ne marche pas...\n");
    }

    char* chaine = casser_vigenere_avec_clef("O'zquahdxlfé ih Qrdwdush jvf xzj gslhjuenwé rwdzçmnvq uqrrzydzy à 1572, msqéh ih qd krzidfnrz gq o'zquahdxlfé ih Urzy-à-Ytxexrz, czl jvf wdfqekéwéj qs 1769 à Qmsfk hf uéwmgouj qs 1852. Enwgéq sdnqonsmqhyjqf à Qmsfk hf à Pqyc, hxqh ileurej p'lyuomswmylasv xséfuklczhe à Emw-xj-Pzf, Ednhk, Ésusdx, Rtunfft, Otvzjv-jw-Wryflz, Xzqéyuqoq, Eflzy-Marxi, Xdusw-Ilé-pjv-Arelhe, Efudjjgjpushe, Yfaéyuqoq hf Bgyc. Mgwlpntgjpqsw, hxqh f xj eydfzw ih lumsg éffexnvejpqsw (géfdjw sr 2011-1169 gg 22 vquwqredj 2011).",3);
    printf("\n");
    for(int i=0;i<taille(chaine);i++){
        printf("%c",chaine[i]);
    }
    printf("\n");
    printf("\n");
    return 0;
}