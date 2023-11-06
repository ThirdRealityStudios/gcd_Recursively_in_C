#include <stdio.h>
#include <stdlib.h>

// gcd = greatest common divisor
// = größter gemeinsamer Teiler = ggT auf Deutsch

int gcd(int u, int v)
{
	/**
	  * gcd(0, 0) = 0 
	  * gcd(0, 1) = 1
	  * gcd(1, 0) = 1
	  * gcd(1, 1) = 1
	  * gcd(1, 2) = 1
	  * gcd(2, 2) = 2
	  * gcd(2, 3) = 1
	  * gcd(2, 4) = 2
	  * gcd(3, 5) = 1
	  * gcd(3, 6) = 3
	  */
	
	if(v == 0)
	{
		v = 1; // Prevent divide by zero.
	}
	
	if(u < v)
	{		  
		return gcd(v, u);
	}
	else if(u % v == 0)
	{
		return v;
	}
	
	return 1;
}

int main()
{
	for(int u = 0; u < 15; u++)
	{
		for(int v = 0; v < 15; v++)
		{
			printf("gcd(%d, %d) = %d\n", u, v, gcd(u, v));
		}
	}
	
	return EXIT_SUCCESS;
}