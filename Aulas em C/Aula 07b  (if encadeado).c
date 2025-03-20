/*o usuario deve informar 3 números inteiros,
o código deve calcular a média aritmética
desses números. Depois deve informar
se há numeros iguais a média, quais números
são maiores que a média e/ou quais são
menores que a média.*/

#include <stdio.h>
int main()
{
int n1,n2,n3;
float media;
printf("\n Digite o valor do 1º número: ");
scanf("%d",&n1);
printf("\n Digite o valor do 2º número: ");
scanf("%d",&n2);
printf("\n Digite o valor do 3º número: ");
scanf("%d",&n3);
media=(n1+n2+n3)/3;
if(n1==media){
printf("\n O número %d é igual a média %.2f", n1,media);
}
else{
if( n2==media){
printf("\n O número %d é igual a média %.2f", n2,media);
}
else{
if (n3== media){
printf("\n O número %d é igual a média %.2f", n3,media);
}
else{
printf("\n O números %d - %d - %d são diferentes da média
%.2f", n1,n2,n3,media);
}
}
}
if(n1>media){
printf("\n O número %d é maior que a média %.2f", n1,media);
}
else{
if( n2> media){
printf("\n O número %d é maior que a média %.2f", n2,media);
}
else{
printf("\n O número %d é maior que a média %.2f", n3,media);
}
}
if(n1<media){
printf("\n O número %d é menor que a média %.2f", n1,media);
}
else{
if( n2< media){
printf("\n O número %d é menor que a média %.2f", n2,media);
}
else{
printf("\n O número %d é menor que a média %.2f", n3,media);
}
}
}