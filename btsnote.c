#include <stdio.h>

int main(){
float moy , sgen , fr , ar , ang , tec , lx , dev , arch , math , eej , win , rs ;
int i , admis ;

printf("entre la note fr :");
scanf("%f",&fr);
printf("entre la note ar :");
scanf("%f",&ar);
printf("entre la note ang :");
scanf("%f",&ang);
printf("entre la note tec :");
scanf("%f",&tec);
printf("entre la note lx :");
scanf("%f",&lx);
printf("entre la note dev :");
scanf("%f",&dev);
printf("entre la note arch :");
scanf("%f",&arch);
printf("entre la note math :");
scanf("%f",&math);
printf("entre la note eej :");
scanf("%f",&eej);
printf("entre la note win :");
scanf("%f",&win);
printf("entre la note rs :");
scanf("%f",&rs);

    
    
sgen = fr*10+ar*10+ang*10+tec*10+lx*50+math*20+rs*50+win*50+eej*10+arch*40+dev*40 ; 

moy = sgen / 300 ;


if(moy >= 10){
    printf("Your moy est :  %f \n", moy);
    printf("admis \n");
    
}else{
    printf("Your moy est :  %f \n", moy);
    printf("no admis \n ");


}

return 0 ;

}
