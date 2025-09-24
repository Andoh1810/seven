#include <stdio.h>

int main(){

    int MatA[50][50], MatB[50][50], MatC[50][50], i, j, nb_lignes, nb_colones;

    printf("\n\n€ntrez le nombre de lignes: ");
    scanf("%d", & nb_lignes);
    printf("\nEntrez le nombre de colones: ");
    scanf("%d", & nb_colones);

    //Remplissage des matrices A et B
    printf("\n\n\tMATRICE A\n\n");
    printf("Entrez les éléments de la matrice A: \n");
    for(i=1; i<= nb_lignes; i++){
        for(j=1; j<= nb_colones; j++){
            printf("ligne %d colone %d:  ", i, j);
            scanf("%d",& MatA[i][j]);
        }
    }

    printf("\n\n\tMATRICE B\n\n");
    printf("Entrez les éléments de la matrice B: \n");
    for(i=1; i<= nb_lignes; i++){
        for(j=1; j<= nb_colones; j++){
            printf("ligne %d colone %d:  ", i, j);
            scanf("%d",& MatB[i][j]);
        }
    }

    //Affichage des matrices A et B
    printf("\nMatrice A: ");
    for(i=1; i<= nb_lignes; i++){
        printf("\n[ ");
        for(j=1; j<= nb_colones; j++){
            printf("%d ",MatA[i][j]);
        }
        printf(" ]");
    }

    printf("\nMatrice B: ");
    for(i=1; i<= nb_lignes; i++){
        printf("\n[ ");
        for(j=1; j<= nb_colones; j++){
            printf("%d ",MatB[i][j]);
        }
        printf(" ]");
    }

    //Calcul de la somme des matrices
    for(i=1; i<= nb_lignes; i++){
        for(j=1; j<= nb_colones; j++){
            MatC[i][j] = MatA[i][j] + MatB[i][j];
        }
    }

    //Affichage du résultat
    printf("\nLa somme est Matrice C: ");
    for(i=1; i<= nb_lignes; i++){
        printf("\n[ ");
        for(j=1; j<= nb_colones; j++){
            printf("%d ",MatC[i][j]);
        }
        printf(" ]");
    }
    printf("\n");
    return 0;
}