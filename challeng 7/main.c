#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

 void parfait(int n){
     int i;
     int r=0;
     for(i=1;i<=n/2;i++){
        if(n%i==0){
            r=r+i;
        }

     }
     if (r==n){
        printf("le nombre est parfait");
     }
     else {
        printf("le nombre est non parfait");
     }
 }

int main()
{
int n;
    printf("**************challeng 8************* 8\n");
    printf("entrer le nombre \n");
    scanf("%d",&n);
    parfait(n);

    return 0;
}
