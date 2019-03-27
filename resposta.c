#include<stdio.h>
#include<stdlib.h>

void calculaTudo(int valorMenor, int valorMaior){
    int quantidadePares=0,somaImpares=0;
    if(valorMenor%2==0){
        printf("Menor impar = %d\n",(valorMenor+ 1));
    }else{
        printf("Menor impar = %d\n",(valorMenor+ 2));
    }
    for(int i = valorMenor+1 ; i<valorMaior ; i++){
        if(i%2==0){
            quantidadePares++;
        }else{
            somaImpares+=i;
        }
    }
    printf("Quantidade de Pares é : %d\nSoma de imapres é %d\n",quantidadePares,somaImpares);
}

int main(void){
    int val1, val2;
    printf(" Escreva os dois numeros separados por espaco : \t");
    scanf("%d %d",&val1,&val2);
    if(val1 > val2){
        calculaTudo(val2,val1);
    }else{
        if(val2>val1){
            calculaTudo(val1,val2);
        }else{
            printf("\nNumeros iguais\n Não existe Menor Impar, nem soma de impares e nem quantidade de pares\n");
        }
    }
    return(0);
}
