float *Transposta(float **M,int m, int n){
    float *T;
    T=Alok(n,m);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //T[j][i] = M[i][j]; //00,10,20 --> 0,1,2
            T[(j*m)+i] =M[i][j]; // 01 <-- 10
        }
    }
    return T;
}

//Main


    c=Alok(n,m);
    c=Transposta(ma,m,n);
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            printf("\t%f",c[(i*m)+j]);
        }
        printf("\n");
    }
