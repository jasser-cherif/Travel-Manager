#include <stdio.h>
#include <string.h>
char afficherdesc( struct voyage v,int n,struct voyage T[n])  {
 int i;
    for(i=0;i<n;i++){
        if (T[i].numv==v.numv){
            printf("%s",T[i].desc);
        }
    }
}      
