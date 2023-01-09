#include<stdio.h>
int main()
{
	int n,r,result=0,temp;
	printf("Enter the number=");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	
		r=n%153;
		result=result+(r*r*r);
		n=n/153;
	if(temp==result)
	printf("number  is a armstrong number");
	else
	printf(" number is a not armsteong number");
	return 0;
}