#include<stdio.h>
int main()
{
    int hr1 , hr2 ,min1 , min2 , duree1 ,duree2 ,diff , cnvertminhr , minrest ;
    printf("entrer l'heure 1 : \n");
    scanf("%d",&hr1);
    printf("entrer min 1 : \n");
    scanf("%d",&min1);
    printf("entrer l'heure 2 : \n");
    scanf("%d",&hr2);
    printf("entrer min 2 : \n");
    scanf("%d",&min2);

    duree1 = hr1 *60 + min1 ;
    duree2 = hr2 *60 + min2 ;
    diff = duree2 - duree1 ;
    cnvertminhr = diff / 60 ;
    minrest = diff %60;
        printf("la duree ecoulee est : %d h:%d min \n", cnvertminhr , minrest);





    return 0;
}