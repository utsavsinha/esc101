/* Program to reverse an array of predefined size */
#include<stdio.h>

int main()
{
	int n, c, d, a[100], b[100];
	printf(" Enter the number of elements in array : the number should be <100 ");
	scanf("%d", &n);
	printf(" Enter the array elements ");
	for ( c=0 ; c< n ; c++)
	scanf("%d", &a[c]);

	/*
	 * Copying elements into array b starting from end of array a
	 */

	for ( c= n-1, d=0; c>=0; c--, d++)
	b[d] = a[c];
	printf(" Original string is \n");
	for ( c=0 ;c<n; c++)
	printf(" %d\n", a[c]);
	printf("  Reversed string is \n");
	for ( d=0 ;d<n; d++)
	printf("%d\n", b[d]);
}
