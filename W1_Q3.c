#include <stdio.h>
int main()
{
  int a;
    printf("enter the number:");
    scanf("%d",&a);
    switch(a%2)
    {
      case 0:
        printf("even");
        break;
    
      case 1:
    
      printf("odd");
      break;
    }
    return 0;
}

