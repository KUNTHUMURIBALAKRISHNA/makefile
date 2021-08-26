#include<stdio.h>
#include"sum.h"
#include"subtract.h"
int main()
{
   int a,b,result,result1;
   printf("enter a two numbers:\n");
   scanf("%d %d",&a,&b);
   result=sum(a,b);
   result1=subtract(a,b);
   printf("the sum is %d\n",result);
   printf("the diff is %d\n",result1);
   return 0;
}
