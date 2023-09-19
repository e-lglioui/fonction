#include <stdio.h>
#include <stdlib.h>

int Max_2(int a,int b){
if(a<b){
    return b;
}
else return a;

}
int Max_4(int a,int b,int c,int d){
int max1,max2;
 max1=Max_2(a,b);
 max2=Max_2(c,d);
return Max_2(max1,max2);
}

int main()
{
    int a,b,c,d;
    int n,max;
    printf("****************challenge 4******************\n");
    printf(" pour trouver le max de deux entiers cliquer 1  \n ");
    printf(" pour trouver le max de 4 entiers cliquer 2  \n ");
    scanf("%d",&n);
    switch(n){
case 1:
    printf("nombre 1 \n");
    scanf("%d",&a);
    printf("nombre 2 \n");
    scanf("%d",&b);
    max=Max_2( a,b);
    printf("le max est %d ",max);
    break;
case 2:
    printf("nombre 1 \n");
    scanf("%d",&a);
    printf("nombre 2 \n");
    scanf("%d",&b);
    printf("nombre 3 \n");
    scanf("%d",&c);
    printf("nombre 4 \n");
    scanf("%d",&d);
    max=Max_4( a,b,c,d);
    printf("le max est %d ",max);
    break;

    default:
        printf("erreur");
        break;
    }
    return 0;
}
