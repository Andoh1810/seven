#include<stdio.h>


int main(){
    int val,i,n;
    int t[100];
    int trouve;
    
    printf("entrer la taille du tableau :");
    scanf("%d", &n);
    printf("entrer les éléments du tableu :");
    for(i=0; i<n; i++){
        scanf("%d", &t[i]);
    }

    printf("entrer la valeur à chercher :");
    scanf("%d", &val);
    trouve = 0;

    for(int i=0; i<n; i++){
        if(val == t[i]){
            trouve = 1;
            break;
        }
    }
        if(trouve == 1){

            printf("%d a été trouvée \n", val);
            
        }else{
            
            printf("%d est introuvable \n", val);
        }
        
        return 0;
}