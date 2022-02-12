#include<stdio.h>
int main()
{
	int a,check;
	printf("enter a number");
	scanf("%d",&a);
	check=a%2;
	switch(check)
	{
		case 0:
			printf("number is even");
			
			break;
		case 1:
				
			printf("number is odd");
			break;
				
		}	
		return(0);
}