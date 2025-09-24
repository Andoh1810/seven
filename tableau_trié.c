#include  <stdio.h>

int main(){

    int tab[50], taille, indice, val, trie;

    do{
        printf("\nEntrez la taille de votre tableau: ");
        scanf("%d", & taille);
    }while(taille>50);
    
    printf("\n\t REMPLISSAGE DE VOTRE TABLEAU\n\n");
    for(indice = 1; indice <= taille; indice++){
        printf("val %d : ", indice);
        scanf("%d", & tab[indice]);
    }

    printf("\n");
    for(indice = 1; indice <= taille; indice++){
        printf("|%d",tab[indice]);
    }

    for(indice = 1; indice < taille; indice++){
        val = tab[indice];
        if(val > tab[indice+1]){
            trie = 0;
            break;
        }
        if(val < tab[indice+1]){
            trie = 1;
        }
    }
    if(trie == 0){
        printf("\n\nVotre tableau n'est pas trié!\n\n");
    }
    if(trie == 1){
        printf("\n\nVotre tableau est trié!\n\n");
    }
    return 0;
}