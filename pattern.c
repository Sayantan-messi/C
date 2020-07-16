# C
#include <stdio.h>

int main()
{
    int n, i, j;

   n = 4;

   for(i = 0; i <= n; i++) {
      for(j = 0; j <= n-i; j++)
         printf(" ");
         
      for(j = 0; j <= i; j++)
         printf("%d ",i+1);

      printf("\n");
   }
   return 0;
}
