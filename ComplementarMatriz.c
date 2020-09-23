float *colunadaMatriz(float *va, int m, int n, int c){
    float *mb=(float*)malloc(sizeof(float)*(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           if(j==c){
                mb[i]=va[(i*n)+j];
           }
        }
    }
    return mb;
}
float *Diagonal(float *V,int p,int q){
    float *vet=(float*)malloc(sizeof(float)*q);
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            if(i==j){
               vet[i]=V[(i*q)+j];
            }
        }
    }
    return vet;
}
