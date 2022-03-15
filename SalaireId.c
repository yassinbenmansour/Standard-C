#include <stdio.h>
int main(){
 
 double hrwork  ,salaire  ;
 int  Id, montantS_par_heur; 

 printf("entre votre Id  d'emploi: (Max. 10 chars) \n ");
 scanf("%d",&Id);
 printf("entre votre Montant du salaire par heur :\n ");
 scanf("%d",&montantS_par_heur);
 printf("entre les heures de travail :\n ");
 scanf("%lf",&hrwork);

 salaire = montantS_par_heur * hrwork ; 
 printf("ID D'emploiye : %d\n" , Id);
 printf("Salaire = %.2lf MAD \n" , salaire);

 return 0;

}