#include<stdio.h>
int main ()
{
float length,width,area,perimeter;
printf("enter the value of length:");
scanf("%f",&length);
printf("enter the value of width");
scanf("%f",&width);
area=length*width;
perimeter=2*(length+width);
printf("\n area of rectangle=%.2f\n",area);
printf("\n perimeter of rectangle=%.2f\n",perimeter);
}
    