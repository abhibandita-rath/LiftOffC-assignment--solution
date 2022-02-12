#include <stdio.h>
int main()
{
  int x,y;
  char ch;
  printf("choose the operator(+,-,*,/):");
  scanf("%c",&ch);
  
  printf("enter two numbers");
  scanf("%d%d",&x,&y);
  switch(ch)
  {
  	case'+':
  	printf("%d+%d=\t%d\n",x,y,x+y);	
  	break;
  	case'-':
  	printf("%d-%d",x,y,x-y);
  	break;
  	case'*':
  	printf("%d*%d",x,y,x*y);
  	break;
  	case'/':
  	printf("%d/%d",x,y,x/y);
  	break;
  	default:
  		printf("invalid input");
  	}
  
}
