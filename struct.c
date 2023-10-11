#include <stdio.h>
#include <string.h>
int main() {
    struct date
    {
        int j;
        int m;
        int a;
    };
    struct voyage
    {
      int numv;
      char pays[100];
      struct date dd;
      int nbj;
      char desc[1000];
    };
    int n,i;
    struct voyage T[n];
    void supprimer(struct voyage v,int n,struct voyage T[n] );
    printf("donner n");
    scanf("%i",&n);
    for(i=0;i<n;i++){
        struct voyage T[i] ;
    printf("donner numv,nbj,j,m,a");
    scanf("%i %i %i %i %i",&T[i].numv,&T[i].nbj,&T[i].dd.j,&T[i].dd.m,&T[i].dd.a);
    gets(T[i].pays);
    gets(T[i].desc);
    }
    
    struct voyage v;
    printf("donner numv,nbj,j,m,a");
    scanf("%i %i %i %i %i",&v.numv,&v.nbj,&v.dd.j,&v.dd.m,&v.dd.a);
    gets(v.pays);
    gets(v.desc);
    
    return 0;
}
