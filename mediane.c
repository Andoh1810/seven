#include<stdio.h>
#include<stdlib.h> 
int main(){


    int n,i;
    int t[100];

    do{

        printf("entrer la taille du tableau :");
        scanf("%d", &n);

    }while(n%2==0);
        system("clear");
        printf("entrer les éléments du tableu :");
        for(i=0; i<n; i++){
            scanf("%d", &t[i]);
        }
        printf("la médiane est : %d", t[n/2]);
        return 0;
}