#include <stdio.h>

float soma(float x, float y){
float calculo = x+y;
return calculo;
}

float subtração(float x, float y){
float calculo = x-y;
return calculo;
}

float divisão(float x, float y){
float calculo = x/y;
return calculo;
}

float multiplicação(float x, float y){
float calculo = x*y;
return calculo;
}


int main(void) {
 int x,y,resultado;
printf(
  "Insira o tipo do seu cálculo:\n""\"A\" " "para adição\n" "\"S\" para subtração\n""\"M\" para multiplicação""\n""\"D\" para divisão\n"
  );
 char tipo;
 scanf("%c",&tipo);


 if(tipo=='A'){
   scanf("%d %d",&x,&y);
   resultado=soma(x, y);
   printf("O resultado da adição é: %d\n",resultado);

 }
 else if(tipo=='S'){
   scanf("%d %d",&x,&y);
   resultado=subtração(x, y);
   printf("O resultado da subtração é: %d\n",resultado);

 }
   else if(tipo=='M'){
   scanf("%d %d",&x,&y);
   resultado=multiplicação(x, y);
   printf("O resultado da multiplicação é: %d\n",resultado);

 }
 if(tipo=='D'){
   scanf("%d %d",&x,&y);
   resultado=divisão(x, y);
   printf("O resultado da divisão é: %d\n",resultado);

 }

printf("Obrigado\n");



  return 0;
}