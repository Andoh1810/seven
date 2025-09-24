#include <stdio.h>

int main(){
    
    int tab[50], taille, i, val, indice_fin;

    do{
        printf("\nDonnez la taille du tableau: ");
        scanf("%d",& taille);
    }while(taille > 50 || taille < 1);

    indice_fin = taille; 

    printf("\n\n\tREMPLISSAGE DU TABLEAU \n\n");
    for(i=1; i<= taille; i++){
        printf("val %d: ",i);
        scanf("%d",& tab[i]);
    }

    printf("\n\nTableau initial: ");
    for(i=1; i<=taille; i++){
        printf("|%d", tab[i]);
    }
    printf("|\n\n");

    for(i=1; i<=taille/2; i++){
        val = tab[i];
        tab[i] = tab[indice_fin];
        tab[indice_fin] = val;
        indice_fin --;
    }

    printf("Tableau inversé: ");
    for(i=1; i<=taille; i++){
        printf("|%d", tab[i]);
    }
    printf("|\n\n");

    return 0;
}