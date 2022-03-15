//
//  main.c
//  bts_note
//
//  Created by Yassinebenmansour on 5/11/2021.
//

#include <stdio.h>

int main() {
    
    float  fr , ar , ang , tec , lx , dev , arch , math , eej , win , rs ;
    float ULC , UTS , UP ;
    float Moy ;

    printf("entre la note fr : \n");
    scanf("%f",&fr);
    printf("entre la note ar : \n");
    scanf("%f",&ar);
    printf("entre la note ang : \n");
    scanf("%f",&ang);
    printf("entre la note tec : \n");
    scanf("%f",&tec);
    printf("entre la note lx : \n");
    scanf("%f",&lx);
    printf("entre la note dev : \n");
    scanf("%f",&dev);
    printf("entre la note arch : \n");
    scanf("%f",&arch);
    printf("entre la note math : \n");
    scanf("%f",&math);
    printf("entre la note eej : \n");
    scanf("%f",&eej);
    printf("entre la note win : \n");
    scanf("%f",&win);
    printf("entre la note rs : \n");
    scanf("%f",&rs);

    ULC = (( ar + fr + ang + tec ) * 10) ;
    UTS = (math * 20 + eej * 10 + lx * 50 + dev * 40 + arch * 40);
    UP = ((rs + win) * 50) ;
    
    ULC = ULC/40 ;
    UTS = UTS/160 ;
    UP = UP/100 ;
    Moy = (UP + UTS + ULC)/300 ;
    
    
    if (Moy >= 10 &&  UP > 10 && UTS > 10 && ULC > 10  ) {
        printf("VOTRE MOYYENE DE BTS EST : %d \n " , Moy);
        printf("admis \n");
    }else if (Moy >= 10 &&  UP > 10 && UTS > 10 && ULC < 10  ){
        printf("VOTRE MOYYENE DE BTS EST : %d \n " , Moy);
        printf("attenter la reunion des ensiegnement \n");
    }else{
        printf("VOTRE MOYYENE DE BTS EST : %d \n " , Moy );
            printf("no admis \n ");
    }

    
    
    
    return 0;
}
