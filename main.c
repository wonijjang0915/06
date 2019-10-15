#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int factorial(int n)
{
	int result=1;
	int i;
	for(i=1;i<=n;i++)
	{ 
	   result=result*i;
	   }  
	return result;
}

int calcCombination(int n, int r)
{
	int high, low;
	high = factorial(n);
	low = factorial(n-r)*factorial(r);
	
	return high/low;
}

int main(void)
{
	int n, r;
	int result;
	
    printf("input n and r");
    scanf("%d %d", &n, &r);
    
	result = calcCombination(n, r);
	printf("combination result is %d\n", result);
	
    return 0;	
}
