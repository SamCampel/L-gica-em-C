/* variáveis float*/
#include <stdio.h>

int main()
{
    
    float n1,n2,n3,n4,media;
    
    printf("Digite o 1º número: ");
    scanf("%f",&n1);
    printf("\nDigite o 2º número: ");
    scanf("%f",&n2);
    printf("\nDigite o 3º número: ");
    scanf("%f",&n3);
    printf("\nDigite o 4º número: ");
    scanf("%f",&n4);
    
    media=(n1+n2+n3+n4)/4;
    
    printf("\n A média de %.2f , %.2f , %.2f , %.2f = %.2f",n1,n2,n3,n4,media );
    
    
}

  /* HOLERITE*/


#include <stdio.h>

int main()
{
    
    float sal,vlr_aumento,taxa,sal_novo;
    
    printf("Digite o valor do Salário: ");
    scanf("%f",&sal);
    printf("\nDigite o valor da taxa: ");
    scanf("%f",&taxa);
    
    vlr_aumento=sal*taxa/100;
    sal_novo=sal+vlr_aumento;
    
    
    printf("\n **************Holerite****************" );
    printf("\n Salário Atual: %.2f",sal);
    printf("\n Taxa de aumento : %.2f ",taxa);
    printf("\n Valor do aumento : %.2f ",vlr_aumento);
    printf("\n Salário com o  aumento : %.2f ",sal_novo);
    printf("\n **************************************" );
    
    
}


#include <stdio.h>

int main()
{
    
    float sal,vlr_aumento,taxa,sal_novo,tx_inss,vlr_desc_inss,sal_liq;
    
    printf("Digite o valor do Salário Atual: ");
    scanf("%f",&sal);
    printf("\nDigite o valor da taxa de Aumento: ");
    scanf("%f",&taxa);
    printf("\nDigite o valor da taxa de INSS: ");
    scanf("%f",&tx_inss);
    
    vlr_aumento=sal*taxa/100;
    sal_novo=sal+vlr_aumento;
    vlr_desc_inss=sal_novo*tx_inss/100;
    sal_liq=sal_novo-vlr_desc_inss;
    
    
    printf("\n **************Holerite****************" );
    printf("\n Salário Atual: %.2f",sal);
    printf("\n Taxa de aumento : %.2f ",taxa);
    printf("\n Valor do aumento : %.2f ",vlr_aumento);
    printf("\n Salário com o  aumento : %.2f ",sal_novo);
    printf("\n Taxa de Inss: %.2f", tx_inss);
    printf("\n Valor do Desconto de INSS: %.2f",vlr_desc_inss);
    printf("\n Salário Líquido: %.2f", sal_liq);
    printf("\n **************************************" );
    
    
}