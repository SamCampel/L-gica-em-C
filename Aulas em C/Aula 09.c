#include <stdio.h>

int main()
{
    int opc;
    float n1,n2,res;
    
    printf("\n****MENU CALCULADORA****");
    printf("\n** 1- SOMA            **");
    printf("\n** 2- SUBTRAÇÃO       **");
    printf("\n** 3- MULTIPLICAÇÃO   **");
    printf("\n** 4- DIVISÃO         **");
    printf("\n************************");
    printf("\nEscolha a opção desejada: ");
    scanf("%d",&opc);
    
    
    if ((opc>0) && (opc<5)){
        printf ("\nOpção Válida!");
        
        printf("\nEntre com o 1º Número:");
        scanf("%f",&n1);
    
        printf("\nEntre com o 2º Número:");
        scanf("%f",&n2);
    
        
    }
        else{
            printf("\nOpção Inválida!");
        }
        if(opc==1){
            res=n1+n2;
            printf("\n%.2f + %.2f = %.2f",n1,n2,res);
        }
        if(opc==2){
            res=n1-n2;
            printf("\n%.2f - %.2f = %.2f",n1,n2,res);
        }
        if(opc==3){
            res=n1*n2;
            printf("\n%.2f x %.2f = %.2f",n1,n2,res);
        }
        if(opc==4){
            res=n1/n2;
            printf("\n%.2f ÷ %.2f = %.2f",n1,n2,res);
        }
        
    }