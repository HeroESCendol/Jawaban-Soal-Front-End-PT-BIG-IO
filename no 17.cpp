#include <stdio.h>
 int main()
 {  int a, b, c;   
  printf("masukan nilai : ");  
  scanf("%d", &c);    
  for (a=1; a<2*c; a++){   
  for (b=1; b<2*c; b++){    
  if (  (a<=b && a+b<=2*c)  ||  (a>c && a>=b && a+b>=2*c)  ) printf("*");     else printf(" ");   }   
  printf("\n");  }  }
