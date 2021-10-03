#include<stdio.h> 

int add(int x, int y) 
{ 
	/* Iterate till there is no carry  */
	while (y != 0) 
	{ 
		/* carry now contains common */
		/*set bits of x and y */
		int carry=0;
    carry = x & y; 

		/* Sum of bits of x and y where at */
		/*least one of the bits is not set */
		x = x ^ y; 

		/*Carry is shifted by one so that adding */
		/* it to x gives the required sum */
		y = carry << 1; 
	} 
	return x; 
} 

int main() 
{ 
  int n1,n2;
  n1=10;
  n2=35;
	printf(" Sum of %d and %d is %d\n\n",n1,n2,add(n1,n2)); 
	return 0; 
} 
