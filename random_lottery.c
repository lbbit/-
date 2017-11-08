#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void rand_the_array(int a[],int n)
{
	int temp_i=0,temp_n;
	for(int i=0;i<n;i++)
	{
		a[i]=i+1;
	}
	srand((unsigned)time(NULL));
	for(int i=0;i<n;i++)
	{
		temp_i=rand()%n;
		temp_n=a[i];
		a[i]=a[temp_i];
		a[temp_i]=temp_n;
	}
}
void sort_the_array(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main()
{
	int array_A[33],array_B[16];
	rand_the_array(array_A,33);
	rand_the_array(array_B,16);
	sort_the_array(array_A,6);
	printf("\n\r\r********************************");	
	printf("\n\r\r***    双色球下期中奖号码    ***");	
	printf("\n\r\r********************************");	
	printf("\n\r\r***                          ***");
	printf("\n\r\r*** ");
	for(int i=0;i<6;i++)
	{
		printf("%3d",array_A[i]);
	}
	printf("%4d",array_B[0]);
	printf("   ***");
	printf("\n\r\r***                          ***");
	printf("\n\r\r********************************");
	printf("\n\r\r");
}
