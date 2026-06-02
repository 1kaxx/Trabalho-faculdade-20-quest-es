#include <stdio.h>
int main(){char nome[50],cidade[50]; int idade;
scanf(" %[^\n]",nome); scanf("%d",&idade); scanf(" %[^\n]",cidade);
printf("%s\n%d\n%s\n",nome,idade,cidade); return 0;}