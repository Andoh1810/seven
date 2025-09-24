#include <stdio.h>

int main(){

    int Mat[50][50], Vec[50], Result[50], i,j, nb_lignes, nb_colones, nb_elmVect;
    
    printf("Entrez le nombre d'éléments du vecteur: ");
    scanf("%d",& nb_elmVect);

    do{
        printf("Entrez le nombre de colones de votre matrice (le même nombre que le nombre d'éléments de votre vecteur): ");
        scanf("%d", & nb_colones);
    }while(nb_colones != nb_elmVect);

    printf("Entrez le nombre de lignes de votre matrice: ");
    scanf("%d", & nb_lignes);

    printf("\n\n\tVECTEUR\n\n");
    printf("Entrez les éléments du vecteur: \n");
    for(i=1; i<= nb_elmVect; i++){
        printf("element vect %d : ",i);
        scanf("%d",& Vec[i]);
    }

    printf("\n\n\tMATRICE\n\n");
    printf("Entrez les éléments de la matrice: \n");
    for(i=1; i<= nb_lignes; i++){
        for(j=1; j<= nb_colones; j++){
            printf("ligne %d colone %d:  ", i, j);
            scanf("%d",& Mat[i][j]);
        }
    }

    printf("\nVecteur: ( ");
    for(i=1; i<= nb_elmVect; i++){
        printf("%d ", Vec[i]);
    }
    printf(")\n");

    printf("\nMatrice: ");
    for(i=1; i<= nb_lignes; i++){
        printf("\n[ ");
        for(j=1; j<= nb_colones; j++){
            printf("%d ",Mat[i][j]);
        }
        printf(" ]");
    }

    printf("\nLe produit vecteur-matrice est: ( ");
    for(i=1; i<= nb_lignes; i++){
        for(j=1; j<= nb_colones; j++){
            Result[i] += Mat[i][j] * Vec[j];
        }
    }

    for(i=1; i<= nb_lignes; i++){
        printf("%d ", Result[i]);
    }
    printf(")\n");

    return 0;
}