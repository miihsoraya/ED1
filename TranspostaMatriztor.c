float *Transposta(float **M,int m, int n){
    float *T;
    T=Alok(n,m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            T[(j*m)+i] =M[i][j];
        }
    }
    return T;
}
float *Transposta(float *T,int m, int n){
    float *mb;
    mb=Alok(n,m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            mb[(j*m)+i] =T[(i*n)+j]; 
        }
    }
    return mb;
}

//Main


    c=Alok(n,m);
    c=Transposta(ma,m,n);
    c=Transposta(vet,m,n);

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%f",c[(i*m)+j]);
        }
        printf("\n");
    }
