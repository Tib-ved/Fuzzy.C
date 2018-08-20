#include<stdio.h>
int main()
{
	int i,j,count=0;
	float A[5],E1[5], E2[5];
	printf("\nEnter the elements for fuzzy set A\n");
	for(i=0;i<5;i++)
	{
	scanf("%f",&E1[i]);
	}

	printf("\nEnter the membership function for the fuzzy sets\n");
	for(i=0;i<5;i++)
	{
	scanf("%f",&A[i]);
	}

	for(i=0;i<5;i++)
	{
 	 E2[i]=(E1[i]*E1[i])-3;	
	}
	
	for(i=0;i<5;i++)
	{
	count=0;
	for(j=i+1;j<5;j++)
	{
		if(E2[i]==E2[j])
		{
		if(A[i]>A[j])	
		{
		printf("%5.2f/%5.2f\t",A[i],E2[i]);
		}
		else if(A[j]>=A[i])
		{
		printf("%5.2f/%5.2f\t",A[j],E2[j]);
		}
		}
		else
		{
		count++;
		}
		
	}	
	if(count==(k-l))
	{
		printf("%5.2f/%5.2f\t",A[i],E1[i]);
	}
	}




	return 0;
}

