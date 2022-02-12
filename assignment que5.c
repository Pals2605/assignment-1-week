#include<stdio.h>
#include<math.h>
#define PI 3.14
	int main()
	{
		int r,dia;
		float area,circ;
		printf("enter radius of circle:");
		scanf("%d",&r);
		dia=2*r;
		printf("diameter is %d \n ",dia);
		circ=2*PI*r;
		printf("circumference is %f \n ",circ);
		area=PI*r*r;
		printf("area is %f\n",area);
		return(0);
	}
