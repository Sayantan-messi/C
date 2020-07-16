# C
#include <stdio.h>

int main ()
{
  int a[100], i, min=10000, max=0, n;
  printf ("Enter the number of elements of the array");
  scanf ("%d", &n);
  printf("Enter the elements of the array");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &a[i]);
    }
  for(i=0;i<n;i++)
  {
      if(a[i]>max)
        max=a[i];
      if(min>a[i])
        min=a[i];
  }
  printf("The maximum number is %d",max);
  printf("\n");
  printf("The minimum number is %d",min);
}
