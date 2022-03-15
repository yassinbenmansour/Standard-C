#include <stdio.h>
int main(){
    int q, s;
    printf("Entrer une somme d'argent: ");
    scanf("%d", &s);
    
    printf("\nResultat : \n");
    
   
    
    q = s / 100;
    s = s % 100;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 100dh\n",q);
        else
            printf("%d billets de 100dh\n",q);
    }
    
    q = s / 50;
    s = s % 50;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 50dh\n",q);
        else
            printf("%d billets de 50dh\n",q);
    }
 
    q = s / 20;
    s = s % 20;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 20dh\n",q);
        else
            printf("%d billets de 20dh\n",q);
    }
 
    q = s / 10;
    s = s % 10;
    if(q > 0){
        if(q == 1)
            printf("%d piece de 10dh\n",q);
        else
            printf("%d pieces de 10dh\n",q);
    }
    q = s / 5;
    s = s % 5;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 5dh\n",q);
        else
            printf("%d billets de 5dh\n",q);
    }
    
    q = s / 2;
    s = s % 2;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 2dh\n",q);
        else
            printf("%d billets de 2dh\n",q);
    }
    
    q = s / 1;
    s = s % 1;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 1dh\n",q);
        else
            printf("%d billets de 1dh\n",q);
    }
    
 
    q = s / 0,5;
    s = s % 0,5;
    if(q > 0){
        if(q == 1)
            printf("%d billet de 0,5dh\n",q);
        else
            printf("%d billets de 0,5dh\n",q);
    }
    
}
