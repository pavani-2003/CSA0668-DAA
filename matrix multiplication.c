#include<stdio.h>
#include<conio.h>
int main()
{ 
   int mat1[2][2],mat2[2][2],mat3[2][2], sum=0 ,i,j,k;
   printf("Enter first 2*2 matrix elements:");
    for  (i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    scanf("%d",&mat1[i][j]);
    }
    printf("Enter second 2*2 matrix elements:");
    for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)                             
		scanf("%d",&mat2[i][j]);
		
		}  
		printf("Multiplying two matrices");
		for(i=0;i<2;i++)  
		{
			for(j=0;j<2;j++)
			{
				sum=0;
				for(k=0;k<2;k++)
				sum=sum+mat1[i][k]*mat2[k][j];
				mat3[i][j]=sum;		
			}
		}
		printf("\nMultplication result of the two given matrix is:\n");
		for(i=0;i<2;i++)
		{
			for(j=0;j<2;j++)
			printf("%d\t",mat3[i][j]);
			printf("\n");
		}
		return 0;
	}
