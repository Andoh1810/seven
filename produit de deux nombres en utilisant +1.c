#include <stdio.h> 
int main(){
    int a,b,i,j,p;
    printf("    ===PRODUIT DE DEUX NOMBRES===\n \n    ");
    do{
      printf("  Entrez les deux nombres:\n");
      scanf("%d %d",&a,&b);
    } while(a<0 || b<0);
    p=0;
    //Calcul du produit de a et b en n'utilisant que +1
    for(i=0;i<b;i++){
        for(j=0;j<a;j++){
            p=p+1;
        }
    }
    //Affichage du résultat 
    printf("  Le produit des deux nombres est: \n %d*%d=%d\n",a,b,p);
    return 0;
}