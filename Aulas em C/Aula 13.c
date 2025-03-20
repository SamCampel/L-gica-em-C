#include <stdio.h>

int main()
{
    int cont=0, lim_min, lim_max;
    
    printf("\n Digite o Limite Mínimo: ");
    scanf("%d",&lim_min);
    
    printf("\n Digite o Limite Máximo: ");
    scanf("%d",&lim_max);
    
    printf("\n Ordem Crescente de %d ate %d ",lim_min,lim_max);
    cont=lim_min;
    
    while(cont<=lim_max){
        printf("\n %d ",cont);
        cont++;
    }
    
    printf("\n Ordem Decrescente de %d ate %d ",lim_max,lim_min);
    cont=lim_max;
    
    while(cont>=lim_min){
        printf("\n %d ",cont);
        cont--;
    }
    
    
    

    
}

#include <stdio.h>

int main()
{
    int num=1,acumulador=0;
    
    while( num!=0 ){
        printf("Digite um número ou 0 para ver a Somatória: ");
        scanf("%d",&num);
        acumulador=acumulador+num;
        if(num==0){
            printf ("A soma dos números é: %d", acumulador);
            return 0;
        }
    }
    
    
    

    
}

 

#include <stdio.h>

int main()
{
    int num=1,acumulador=0,cont=0;
    
    while( num!=0 ){
        printf("Digite um número ou 0 para ver a Somatória: ");
        scanf("%d",&num);
        acumulador=acumulador+num;
        cont++;
        if(num==0){
            printf ("A soma dos números é: %d", acumulador);
            if (cont==0){
                printf("\n Números Digitados: %d",cont);
            }
            else{
                cont--;
                printf("\n Números Digitados: %d",cont);                
            }
            
            return 0;
        }
    }

 

#include <stdio.h>

int main()
{
    int num=1,acumulador=0,cont=0,media;
    
    
    while( num!=0 ){
        printf("Digite um número ou 0 para ver a Somatória: ");
        scanf("%d",&num);
        acumulador=acumulador+num;
        cont++;
        if(num==0){
            printf ("A soma dos números é: %d", acumulador);
            if (cont==0){
                printf("\n Números Digitados: %d",cont);
                printf("\n Média dos Números: %d",cont);
            }
            else{
                cont--;
                printf("\n Números Digitados: %d",cont);
                printf("\n Média dos Números: %d",acumulador/cont);
            }
            
            return 0;
        }
    }
    
    
    

    
}


    
    
    

    
}

 

#include <stdio.h>

int main()
{
    int num;
    
        printf("\nDigite um número: ");
        scanf("%d",&num);
        
        if(num %2 ==0){
            printf("\n %d é PAR",num);
        }
        else{
            printf("\n %d é IMPAR",num);    
        }
        
    

    
}