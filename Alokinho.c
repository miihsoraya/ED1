float *Alok(int m, int n){
    float *M =(float*)malloc(sizeof(float)*(m*n));//n vetores
    if(M!=NULL){
       printf("\n****Matriz Alocada****\n");
    }else{
       printf("Erro na Matriz");
       system("pause");
       exit(1);
    }
    return M;
}
float **AlokMatriz(int m, int n){
    float **M=(float**)malloc(sizeof(float*)*m);//n vetores
    if(M!=NULL){
        for(int i=0;i<m;i++){
            M[i] = (float*)malloc(sizeof(float)*n);//n inteiros
        }
    }else{
       printf("Erro na Matriz");
       system("pause");
       exit(1);
    }
    return M;
}
