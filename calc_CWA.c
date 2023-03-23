#include <stdio.h>
#include <stdlib.h>

int main ()

{ int C1, C2, C3, Ch1, Ch2, Ch3 ;

 printf("Enter scores for courses : ");

 scanf("%d %d %d",&C1, &C2, &C3);

 printf("Enter credit hours for courses : ");

 scanf("%d %d %d",&Ch1, &Ch2 ,&Ch3);

 float  total =   Ch1 + Ch2 + Ch3 ;

 printf("%f\n", total);

 float SWA   =  ( Ch1*C1 + Ch2*C2 + Ch3*C3 )/ total;

  printf(" %0.2f", SWA);


















return 0;






}

