#include <stdio.h>
#include <stdlib.h>
#include<math.h>

void resulta(int a,int b,int c){
    float D,r,n;
    float r1,r2,r3,r4;
    D=(b*b)-4*a*c;
    if(D==0){
        r= (-b)/(2*a);
    }
    if(D>0){
       r= (-b+sqrt(D))/(2*a);
       n= (-b-sqrt(D))/(2*a);
    }
    if(D<0){
     printf("pas de solition");
    }
    r4=sqrt(r);
    r2= -sqrt(r);
    r1=sqrt(n);
    r3=-sqrt(n);


    printf("le resultat est %f ou %f ou %f ou %f ",r4,r1,r2,r3);
}


int main()
{
    int a,b,c;
    printf("**********challenge 6**********\n");
    printf("permet de trouver la résolution d’une équation bicarrée (ax4 + bx2 + c = 0) \n");
    printf("enter a= ");
    scanf("%d",&a);
    printf("enter b= ");
    scanf("%d",&b);
    printf("enter c= ");
    scanf("%d",&c);
    resulta(a,b,c);
    return 0;
}
