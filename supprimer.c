void supprimer(struct voyage v,int n,struct voyage T[n] ){
    int i,j;
    for(i=0;i<n;i++){
        if (T[i].numv==v.numv){
            for(j=i;j<n;j++){
                T[j]=T[j+1];
            }
        }
     }
    }
