// Preproccessor
#include <stdio.h>

// Main method
int main(void) {
	// Print hello world information on the screen
	// int --> integer (12 ,456 ,567 , -656) whole number
	// (float , double)  --> (123.45 , 3.56 , 567.00000) fraction number
	// Char --> single ('A' , 'B' , 'C') single quote
	// Char[] --> sequence of character (strings)
	
	// how we display hard coded integer value 
	int age = 42;
	// format specifier 
	// %d --> digits
	printf("My age is :%d\n" , age);
	// address memory location 
	// %p --> 
	printf("Memory address location of my variable age is: %p", age);
	printf("\n\n\n\n\n\n");
	return 0;
}