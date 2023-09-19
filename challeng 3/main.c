#include <stdio.h>
#include <stdlib.h>
 int PGCD(int a,int b){
 if(a%b==0){
    return b;
 }
 else{
    return PGCD(b,a%b);
 }

 }
int main()
{
    int a,b,c;
    printf("****************challenge 3*******************\n");
    printf("entrer le 1 er nombre  \n");
    scanf("%d",&a);
    printf("entrer le 2 eme nombre  \n ");
    scanf("%d",&b);
    c=PGCD(a,b);
    printf("le PGCD est %d ",c);
    return 0;
}
