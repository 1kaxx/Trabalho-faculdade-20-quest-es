#include <stdio.h>
int main(){int n; long long fat=1; scanf("%d",&n);
for(int i=n;i>=1;i--) fat*=i;
printf("%lld\n",fat); return 0;}