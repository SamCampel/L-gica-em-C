#include <stdio.h>

int main()
{
    int cont=0,res=0,num=1,contpar=0,contimpar=0,somapar=0,somaimpar=0,mediapar=0,mediaimpar=0;
    
    
    while(num!=0){
        printf("\nDigite um número: ");
        scanf("%d",&num);
        res=(num % 2);
        if(res==0){
            somapar=somapar+num;
            contpar++;
        }
        else{
            somaimpar=somaimpar+num;
            contimpar++;
        }
        cont++;
    }
    
    if(cont==0){
        printf("\nNúmeros Digitados: %d",cont);
        printf("\nQuantidade de números Pares digitados: %d",cont);
        printf("\nSoma dos números Pares: %d",cont);
        printf("\nMédia dos Números Pares: %d",cont);
        printf("\nQuantidade de números Ímpares digitados: %d",cont);
        printf("\nSoma dos Números Ímpares: %d",cont);
        printf("\nMédia dos Números Ímpares: %d",cont);
    }
    else{
        cont--;
        printf("\nNúmeros Digitados: %d",cont);
        contpar--;
        printf("\nQuantidade de números Pares digitados: %d",contpar);
        printf("\nSoma dos números Pares: %d",somapar);
        printf("\nMédia dos Números Pares: %d",somapar/contpar);
        printf("\nQuantidade de números Ímpares digitados: %d",contimpar);
        printf("\nSoma dos Números Ímpares: %d",somaimpar);
        printf("\nMédia dos Números Ímpares: %d",somaimpar/contimpar);
    }
    
    

    
}

 

#include <stdio.h>

int main()
{
   
   int cont=6;
   while (cont<=5){
       printf("\nRepetição  - WHILE %d/%d",cont,5);
       cont ++;
   }
   
   printf("\n\n");
   
   cont=6;
   do{
       printf("\nRepetição  - DO WHILE %d/%d",cont,5);
       cont ++;
   }while(cont<=5);
   
   
   
   
   
   
   
   
    
}

 

#include <stdio.h>

int main()
{
   
   int opc,num1,num2;
   
   do{
        printf("\n*****MENU CALCULADORA*****");
        printf("\n* 1 - SOMA               *");
        printf("\n* 0 - Sair               *");
        printf("\n Digite a opção desejada: ");
        scanf("%d",&opc);
        if(opc==1){
            printf("\nDigite o primeiro Número: ");
            scanf("%d",&num1);
            printf("\nDigite o segundo Número: ");
            scanf("%d",&num2);
            printf("\n %d + %d = %d ",num1,num2,num1+num2);
            
        }
        
        if(opc==0){
            printf("\n Saindo da CALCULADORA");
            return 0;
        }
    
   }while (opc!=0);
   
    
}

 

#include <stdio.h>

int main()
{
   
   int opc;
   float num1,num2;
   
   do{
        printf("\n\n*****MENU CALCULADORA*****");
        printf("\n* 1 - SOMA               *");
        printf("\n* 2 - SUBTRAÇÃO          *");
        printf("\n* 3 - MULTIPLICAÇÃO      *");
        printf("\n* 4 - DIVISÃO            *");
        printf("\n* 5 - Sair               *");
        printf("\n**************************");
        printf("\n\n Digite a opção desejada: ");
        scanf("%d",&opc);
        if (opc<1 || opc>5){
            printf("\n Opção Inválida!");
        }
        else {
            if (opc>=1 && opc <=4){
            printf("\nDigite o primeiro Número: ");
            scanf("%f",&num1);
            printf("\nDigite o segundo Número: ");
            scanf("%f",&num2);
                if(opc==1){
                    printf("\nOperação Selecionada: SOMA");
                    printf("\n\n %.1f + %.1f = %.1f ",num1,num2,num1+num2);
                }    
                if(opc==2){
                    printf("\nOperação Selecionada: SUBTRAÇÃO");
                    printf("\n\n %.1f - %.1f = %.1f ",num1,num2,num1-num2);
                }
                if(opc==3){
                    printf("\nOperação Selecionada: MULTIPLICAÇÃO");
                    printf("\n\n %.1f x %.1f = %.1f ",num1,num2,num1*num2);
                }
                if(opc==4){
                    printf("\nOperação Selecionada: DIVISÃO");
                    printf("\n\n %.1f + %.1f = %.1f ",num1,num2,num1/num2);
                }
            }
            
            if(opc==5){
                printf("\n Saindo da CALCULADORA");
                return 0;
            }
        }
   }while (opc!=5);
   
    
}