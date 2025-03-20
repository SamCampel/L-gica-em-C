/*if composto e encadeado*/
#include <stdio.h>

int main()
{
    int a,b,c;
    
    printf("\nDigite o lado A do triângulo:");
    scanf("%d",&a);
    
    printf("\nDigite o lado B do triângulo:");
    scanf("%d",&b);
    
    printf("\nDigite o lado C do triângulo:");
    scanf("%d",&c);
    
    
    if((a<=(b+c))&&(b<=(a+c))&&(c<=(a+b))){
        printf("\n As dimensões informadas formam um triângulo");
        if((a==b)&&(b==c)){
            printf("\nÉ um triângulo EQUILÁTERO!");
        }
        else{
            if((a==b)||(b==c)||(a==c)){
                printf("\nÉ um triângulo ISÓSCELES!");
            }
            else{
                printf("\nÉ um triângulo ESCALENO!");
            }
        
         }
        }
      
    
    else{
        printf("\n As dimensões informadas NÃO formam um triângulo");
    }
    
    
    
}