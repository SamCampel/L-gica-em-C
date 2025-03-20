Aula 7

#include <stdio.h>

int main()
{
    int ano_nasc, ano_atual, idade, idade_aposentadoria;
    
    printf("\nDigite o ano de seu nascimento: ");
    scanf("%d",&ano_nasc);
    
    printf("\nDigite o ano atual: ");
    scanf("%d",&ano_atual);
    
    printf("\nDigite qual a idade para se aposentar:");
    scanf("%d",&idade_aposentadoria);
    
    idade=(ano_atual-ano_nasc);
    
    if( idade>=idade_aposentadoria){
        printf("\nVocê tem %d anos, portanto PODE SE APOSENTAR!",idade);
        printf("\nVocê já poderia ter se aposentado há %d anos",idade-idade_aposentadoria);
        
    }
    else{
        printf("\nVocê tem %d anos,portanto NÃO PODE SE APOSENTAR!",idade);
        printf("\nAinda falta %d anos para você se aposentar.",idade_aposentadoria-idade);
    }
    
    
   
}

/* if encadeado*/

#include <stdio.h>

int main()
{
   int n1,n2;
   
   printf("\n Digite o valor do 1º número: ");
   scanf("%d",&n1);
   
   printf("\n Digite o valor do 2º número: ");
   scanf("%d",&n2);
   
   if(n1==n2){
        printf("\n Os números digitados são iguais: %d - %d", n1,n2);
    }
   else{
        printf("\n Os números digitados são diferentes: %d - %d", n1,n2); 
        if(n1>n2){
            printf("\n O maior número é %d",n1);
            printf("\n O menor número é %d",n2);
        }
        else{
            printf("\n O maior número é %d",n2);
            printf("\n O menor número é %d",n1);
        }
    }
}