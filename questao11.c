#include <stdio.h>
int main(){float n1,n2,m; scanf("%f %f",&n1,&n2);
m=(n1+n2)/2;
if(m>=7) printf("Aprovado");
else if(m>=5) printf("Recuperacao");
else printf("Reprovado"); return 0;}