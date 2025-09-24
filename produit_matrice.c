#include <stdio.h>

int main(){

    int MatA[50][50], MatB[50][50], MatC[50][50], i, j,k, nb_LignesA, nb_LignesB, nb_ConlonnesA, nb_ConlonnesB;

    printf("Entrez le nombre de lignes de la première matrice: ");
    scanf("%d", & nb_LignesA);
    printf("Entrez le nombre de colonnes de la première matrice: ");
    scanf("%d", & nb_ConlonnesA);

    nb_LignesB = nb_ConlonnesA;

    printf("Entrez le nombre de colonnes de la deuxième matrice: ");
    scanf("%d", & nb_ConlonnesB);

    //Remplissage des matrices A et B
    printf("\n\n\tMATRICE A\n\n");
    printf("Entrez les éléments de la matrice A: \n");
    for(i=1; i<= nb_LignesA; i++){
        for(j=1; j<= nb_ConlonnesA; j++){
            printf("ligne %d colone %d:  ", i, j);
            scanf("%d",& MatA[i][j]);
        }
    }

    printf("\n\n\tMATRICE B\n\n");
    printf("Entrez les éléments de la matrice B: \n");
    for(i=1; i<= nb_LignesB; i++){
        for(j=1; j<= nb_ConlonnesB; j++){
            printf("ligne %d colone %d:  ", i, j);
            scanf("%d",& MatB[i][j]);
        }
    }

    //Affichage des matrices A et B
    printf("\nMatrice A: ");
    for(i=1; i<= nb_LignesA; i++){
        printf("\n[ ");
        for(j=1; j<= nb_ConlonnesA; j++){
            printf("%d ",MatA[i][j]);
        }
        printf(" ]");
    }

    printf("\nMatrice B: ");
    for(i=1; i<= nb_LignesB; i++){
        printf("\n[ ");
        for(j=1; j<= nb_ConlonnesB; j++){
            printf("%d ",MatB[i][j]);
        }
        printf(" ]");
    }

    //Calcul du produit des matrices
    for(i=1; i<= nb_LignesA; i++){
        for(k=1; k<= nb_ConlonnesA; k++){
            for(j=1; j<= nb_ConlonnesB; j++){
                MatC[i][j] += (MatA[i][k] * MatB[k][j]);
            }
        }
    }
    

     //Affichage du résultat
    printf("\nLe produit est Matrice C: ");
    for(i=1; i<= nb_LignesA; i++){
        printf("\n[ ");
        for(j=1; j<= nb_ConlonnesB; j++){
            printf("%d ",MatC[i][j]);
        }
        printf(" ]");
    }
    printf("\n");
}