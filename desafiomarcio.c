/*Calcule o menor impar, a soma de todos os impares, e as quantidades de pares, dado o usuaria digite em 2 numeros
Fazer isso sem ponteiro, sem vetor, sem os laços de repetição do-while e while, sem struct.*/

#include <stdlib.h>
#include <stdio.h>

int main(){
    int n1, n2, impar, somaimpar, qtdpares;

    printf("Informe um numero: ");
    scanf("%d", &n1);
    printf("Informe um numero: ");
    scanf("%d", &n2);

    if(n1 < n2){
      if(((n1 % 2) == 0) && (n1 > 0)){
        impar = n1 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n1 % 2) != 0) && (n1 > 0)){
        impar = n1 + 2;
        printf("menor impar eh: %d", impar);
      }

      if(((n1 % 2) == 0) && (n1 < 0) && (n2 < 0)){
        impar = n1 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n1 % 2) != 0) && (n1 < 0) && (n2 < 0)){
        impar = n1 + 2;
        printf("menor impar eh: %d", impar);
      }

      if(((n1 % 2) == 0) && (n1 < 0) && (n2 > 0)){
        impar = n1 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n1 % 2) != 0) && (n1 < 0) && (n2 > 0)){
        impar = n1 + 2;
        printf("menor impar eh: %d", impar);
      }

        int qtdpares = 0;
        for(int i = n1 + 1;(i <= n2 - 1); i++){
          if((i % 2) == 0){
            qtdpares ++;
          }
        }

      printf("\nA quantidade de pares foi de: %d\n", qtdpares);

      for(int i = n1 + 1;i <= n2 - 1; i++){
        if((i % 2) != 0){
          somaimpar += i;
        }
      }
      printf("A soma de todos os impares foi de: %d\n", somaimpar);

    }

    if(n2 < n1){
      if(((n2 % 2) == 0) && (n2 > 0)){
        impar = n2 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n2 % 2) != 0) && (n2 > 0)){
        impar = n2 + 2;
        printf("menor impar eh: %d", impar);
      }

      if(((n2 % 2) == 0) && (n2 < 0) && (n1 < 0)){
        impar = n2 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n2 % 2) != 0) && (n2 < 0) && (n1 < 0)){
        impar = n2 + 2;
        printf("menor impar eh: %d", impar);
      }

      if(((n2 % 2) == 0) && (n1 > 0) && (n2 < 0)){
        impar = n2 + 1;
        printf("menor impar eh: %d", impar);
      }else if(((n2 % 2) != 0) && (n1 > 0) && (n2 < 0)){
        impar = n2 + 2;
        printf("menor impar eh: %d", impar);
      }

      int qtdpares = 0;
      for(int i = n2 + 1;(i <= n1 - 1); i++){
        if((i % 2) == 0){
          qtdpares ++;
        }
      }

      printf("\nA quantidade de pares foi de: %d\n", qtdpares);

      for(int i = n2 + 1;i <= n1 - 1; i++){
        if((i % 2) != 0){
          somaimpar += i;
        }
      }
      printf("A soma de todos os impares foi de: %d\n", somaimpar);

    }

    return 0;
}
