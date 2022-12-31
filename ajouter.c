void ajouter(struct voyage v,int n,struct voyage T[n]){
    int i,k;
    for(i=0;i<n;i++){
        if((T[i].dd.a>v.dd.a)||((T[i].dd.a==v.dd.a)&&(T[i].dd.m>v.dd.m))||((T[i].dd.a==v.dd.a)&&(T[i].dd.m==v.dd.m)&&(T[i].dd.j>v.dd.j))){
            for(k=i;k<n+1;k++){
                T[k+1].numv==T[k].numv;
                T[k+1].nbj=T[k].nbj;
                T[k+1].dd.j=T[v].dd.j;
                T[k+1].dd.m=T[k].dd.m;
                T[k+1].dd.a=T[k].dd.a;
            }
            T[i].numv==v.numv;
            T[i].nbj=v.nbj;
            T[i].dd.j=v.dd.j;
            T[i].dd.m=v.dd.m;
            T[i].dd.a=v.dd.a;
        }
    }
}
