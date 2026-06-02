#include <stdio.h>
int main(){float a,b; char op;
scanf("%f %f",&a,&b); scanf(" %c",&op);
switch(op){case '+': printf("%.2f",a+b); break;
case '-': printf("%.2f",a-b); break;
case '*': printf("%.2f",a*b); break;
case '/': printf("%.2f",a/b); break;
default: printf("Invalido");} return 0;}