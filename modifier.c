void modifier(struct voyage v,int n,struct voyage T[n] ){
    int i;
    for(i=0;i<n;i++){
        if (T[i].numv==v.numv){
            T[i].nbj=v.nbj;
            T[i].dd.j=v.dd.j;
            T[i].dd.m=v.dd.m;
            T[i].dd.a=v.dd.a;
        }
     }
}
