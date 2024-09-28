
#include <stdio.h>

int main(void) 
{
  // scanf for float 
	float height; // store 7 character áfter precision 
	double length; // store 15 character áfter precision 
	printf("Enter your height:\n");
	// %f --> format specifier
	scanf("%f", &height);
	printf("Enter your Length:\n");	
	// %lf --> format specifier
	scanf("%lf", &length);
	printf("My height is :%f\n", height);
	printf("My lenght is :%lf\n", length);
}