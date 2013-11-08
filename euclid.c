/*
 * Program to compute GCD of two numbers using Euclid's Algorithm
 * We will use the property that GCD(a,b) = GCD(b, a%b)
 */
# include<stdio.h>    // Include Headers
void main()
{
	int originala, originalb, a, b;      // Declare variables
	scanf("%d", &originala);             // Read 'originala' from keyboard
	scanf("%d", &originalb);             // Read 'originalb' from keyboard

	// Copy originala and originalb to a and b
	a = originala;
	b = originalb;

	if(a==0)
		printf("%d\n" ,b);
	else if(b==0)
		printf("%d\n", a);
	else
	{
		if(a<b)		// Make sure that a>=b
		{
			int temp = a;
			a = b;
			b = temp;
		}
		while(a%b !=0)
		{
			int remainder = a%b;
			a = b;
			b = remainder;
		}
		printf("GCD of %d and %d is %d\n", originala, originalb, b);
	}
}

