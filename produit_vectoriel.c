#include <stdio.h>

int main(){

    int vectA[4], vectB[4], vectC[4],i;

    printf("\nEntrez les coordonnées du vecteur (A)\n");
    for(i=1; i<=3; i++){
        printf("a%d: ",i);
        scanf("%d",&vectA[i]);
    }

    printf("\nEntrez les coordonnées du vecteur (B)\n");
    for(i=1; i<=3; i++){
        printf("b%d: ",i);
        scanf("%d",&vectB[i]);
    }

    printf("\nVecteur A( ");
    for(i=1; i<=3; i++){
        printf("%d ",vectA[i]);
    }
    printf(")\nVecteur B( ");
    for(i=1; i<=3; i++){
        printf("%d ",vectB[i]);
    }
    printf(")\n");

    vectC[1] = (vectA[2]*vectB[3] - vectA[3]*vectB[2]);
    vectC[2] = (vectA[3]*vectB[1] - vectA[1]*vectB[3]);
    vectC[3] = (vectA[1]*vectB[2] - vectA[2]*vectB[1]);
    printf("\nLe produit vectoriél est: Vecteur C( ");
    for(i=1; i<=3; i++){
        printf("%d ",vectC[i]);
    }
    printf(")\n");


    return 0;
}