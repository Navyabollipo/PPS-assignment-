#include<stdio.h>
int main ()
{
int number;
printf("enter a number:");
scanf("%d",&number);
if (number>0)
printf("%d is positive\n",number);
else if (number<0)
printf("%d negative\n",number);
else
printf("the number is zero\n");
}
    