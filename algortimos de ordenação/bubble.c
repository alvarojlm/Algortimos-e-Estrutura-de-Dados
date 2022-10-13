#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void impV(int *vet, int tam);
void bubbleSort(int *vet, int tam);


int main(){

int desord[]={2,13,8,5,1,7};
int tam = sizeof(desord)/sizeof(desord[0]);

printf("Vetor desordenado: ");
impV(desord,tam);
bubbleSort(desord,tam);
printf("\nVetor ordenado: ");
impV(desord,tam);
printf("\n");

return 0;
}

void impV(int *vet,int tam){

for (int i = 0; i <tam-1; i++) {
  printf("%d, ", vet[i]);
}
  printf("%d. ", vet[tam-1]);
}

void bubbleSort(int *vet, int tam){
int aux=0;

for(int i=0;i<tam-1;i++){
  bool trocou=false;

  for(int j=0;j<tam-i-1;j++){

    if(vet[j]>vet[j+1]){
      aux=vet[j];
      vet[j]=vet[j+1];
      vet[j+1]=aux;
      trocou=true;
        }
      }
    if(trocou==false){
      return;
   }
  }
}