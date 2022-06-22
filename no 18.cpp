#include <stdio.h>

int main()
{
   int i, j, x;

   printf("Masukkan input: ");
   scanf("%d", &x);

   for (i=1; i<=x; i++)
   {
      for (j=1; j<=x; j++)
      {
         if (i == j || j == x-i+1)
            printf("%d", j);
         else
            printf(" ");
      }
      printf("\n");
   }
   return 0;
}
