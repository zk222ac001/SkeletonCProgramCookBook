// V1.0
// DDL --> dynamic link library
// stdio --> standard input out library contains two main functions (printf and scanf)
#include <stdio.h>

int main(void) {
	// Print hello world information on the screen	
	// Whole number , fraction numbers , simple character , sequence of characters
	// int --> whole
	// float and double --> fraction numbers
	// char --> A, B , B
	// char[] --> sequence of characters

	int age = 42;
	// format specifier : %d --> digit
	// format specifier : %p --> find out memory address location
	printf("My age is: %d\n",age );
	// Address memory location of my variable age
	printf("Address memory location of my variable age: %p", age);

	printf("\n\n\n\n\n\n\n\n\n");
	return 0;
}