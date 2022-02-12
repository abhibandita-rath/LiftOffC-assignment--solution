#include<stdio.h>
int main()
{
    char name[50];
    char branch[100];
    char hobbies[100];
    int regdno;
    gets(name);
    scanf("%d",&regdno);
    scanf("%s",&branch);
    scanf("%s",&hobbies);
    printf("NAME=%s\n",name);
    printf("REGD.NUMBER=%d\n",regdno);
    printf("BRANCH=%s",branch);
    printf("HOBBIES=%s",hobbies);
    return 0;
}
