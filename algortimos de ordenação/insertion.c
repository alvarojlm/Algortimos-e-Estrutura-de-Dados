#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void impV(int *vet, int tam);
void insertionSortOTP(int *vet, int tam);

int main(){

int desord[]={2,13,8,5,1,7};
int tam = sizeof(desord)/sizeof(desord[0]);

printf("Vetor desordenado: ");
impV(desord,tam);

insertionSortOTP(desord,tam);

printf("\nVetor ordenado: ");
impV(desord,tam);


return 0;
}

void impV(int *vet,int tam){

for (int i = 0; i <tam-1; i++) {
  printf("%d, ", vet[i]);
}
  printf("%d. ", vet[tam-1]);
}

void insertionSortOTP(int *vet, int tam){
int ord[tam];

ord[0]=vet[0];
for(int i=1;i<tam;i++){ // indice no vetor desordenado
    int j;
    for(j=0;j<i;j++){ //indice no vetor que esta sendo ordenado
    printf("\ni:%d. ", i);
    impV(ord,tam);
    printf("\nj:%d. ", j);
       if(vet[i]<ord[j]){  //verifica onde o vetor ordenado é maior que o desordenado
       printf("\nVetor atual: ");
       impV(ord,tam);
        for(int s=i;s>j;s--){ //começa no indice que está o valor a ser mudado e deve ir até onde o valor é menor para que seja inserido correntamente. 
          ord[s]=ord[s-1];
          }
          printf("\nVetor após alocar: ");
          impV(ord,tam);
        break;
        }
    }
    ord[j]=vet[i];
  }
  
for(int i=0;i<tam;i++){
  vet[i]=ord[i];
}
}