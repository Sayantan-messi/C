# C
#include<stdio.h>
#include<conio.h>
int main()
{
int n, x, y, s;
printf("Enter number of rows to show the star pattern: ");
scanf("%d",&n);
for(x = 1; x <= n; x++)
{
for (s = x; s < n; s++)
printf(" "); 
for(y = 1; y <= (2 * n - 1); y++)
{
if(x == n || y == 1 || y == 2 * x - 1)
printf("*");
else
printf(" ");
}
printf("\n");
}
return 0;
}
