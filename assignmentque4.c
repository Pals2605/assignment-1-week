#include<stdio.h>
	int main()
	{
		int a,b,choice;
		printf("enter two number:");
		scanf("%d %d",&a,&b);
		printf("enter choice ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("addition of two numbers is %d",a+b);
			break;
			case 2:
			printf("subtraction of two numbers is %d",a-b);
			break;
			case 3:
			printf("multiplication of two numbers is %d",a*b);
			break;
			case 4:
			printf("division of two numbers is %d",a/b);
			break;
			default:
			printf("give correct choice");	
		}
		return(0);
	}
