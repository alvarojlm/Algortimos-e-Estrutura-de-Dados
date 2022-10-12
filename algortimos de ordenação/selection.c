#include <stdio.h>
#include <stdlib.h>

#define MAX 100000;

void impV(int *vet, int tam);
void selecSrtOTP(int *vet, int tam);
void selectSrtINP(int *vet, int tam);

int main(){

int desord[]={2,13,8,5,1,7};
int tam = sizeof(desord)/sizeof(desord[0]);

printf("Vetor desordenado1: ");
impV(desord,tam);
selecSrtOTP(desord,tam);
printf("\nVetor ordenado Out-of-place: ");
impV(desord,tam);

int desord_i[]={6,3,82,15,1,7};
int tam_i = sizeof(desord_i)/sizeof(desord_i[0]);

printf("\nVetor desordenado2: ");
impV(desord_i,tam_i);
printf("\nVetor ordenado In-place: ");
selectSrtINP(desord_i,tam_i);
impV(desord_i, tam_i);
printf("\n");

return 0;
}

void impV(int *vet,int tam){

for (int i = 0; i <tam-1; i++) {
  printf("%d, ", vet[i]);
}
  printf("%d. ", vet[tam-1]);
}

void selecSrtOTP(int *vet, int tam){
int ordenado[tam];

for(int i=0;i<tam;i++){
  int minV=0;
  for(int j=0;j<tam;j++){
    if(vet[j] < vet[minV])
    {
      minV=j;
    }
  }
  ordenado[i]=vet[minV];
  vet[minV]=MAX;
}
for(int c;c<tam;c++){
  vet[c]=ordenado[c];
}
}

void selectSrtINP(int *vet, int tam){
int aux=0;
for(int i=0;i<tam;i++){
  int minV=i;
  for(int j=i+1;j<tam;j++){
    if(vet[minV]>vet[j]){
      minV=j;
    }
  }
  aux=vet[i];
  vet[i]=vet[minV];
  vet[minV]=aux;
}
}