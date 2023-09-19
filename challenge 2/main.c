#include <stdio.h>
#include <stdlib.h>
 int somme(int a,int b ){
 int s=0;
 s=a+b;
 return s;
 }

int main()
{
    int a,b,s;
    printf("*********challeng 2**********\n");
    printf("entrer le 1er nombre\n");
    scanf("%d",&a);
    printf("entrer le 2 eme nombre\n");
    scanf("%d",&b);
    s=somme(a,b);
    printf("la somme est %d ",s);

    return 0;
}
