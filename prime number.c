#include<stdio.h>
#include<conio.h>
int main()
{
int num, i, count = 0, m;
printf("Enter the number: ");
scanf("%d",&num);
m = num / 2;
for(i = 2; i <= m; i++)
{
if(num % i == 0)
{
printf("Entered number is not prime");
printf("\n");
count = 1;
break;
}
}
if(count == 0)
{
printf("Entered number is prime");
printf("\n");
}
return 0;
}