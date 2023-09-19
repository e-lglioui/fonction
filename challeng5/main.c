#include <stdio.h>
#include <stdlib.h>
void change(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;

}

int main()
{
    int a,b;
    printf("*****************challenge 4*********************\n");
    printf("entrer le 1er nombre a= ");
    scanf("%d",&a);
    printf("entrer le 2eme nombre b= ");
    scanf("%d",&b);
    change(&a,&b);
    printf("a= %d \n",a);
    printf("b= %d \n ",b);
