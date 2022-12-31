int recherche( struct date d1,struct date d2,int n,struct voyage T[n])  {
    int i;
    for(i=0;i<n;i++){
        if ((T[i].dd.a<d2.a && T[i].dd.a>d1.a)||((T[i].dd.a==d2.a || T[i].dd.a==d1.a)&&(T[i].dd.m<d2.m && T[i].dd.m>d1.m))||((T[i].dd.a==d2.a || T[i].dd.a==d1.a)&&(T[i].dd.m==d2.m || T[i].dd.m==d1.m)&&(T[i].dd.j<d2.j && T[i].dd.j>d1.j))){
            printf("%i",T[i].numv);
        }
    }
}  
