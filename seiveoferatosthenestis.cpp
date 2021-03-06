#include <stdio.h>
#include <math.h>


const int size = 40;
int ara[size];


void print_ara()
{
	int i;
	for (i = 2; i < size; i++)
	{
		printf("%4d\n", ara[i]);
	}

	printf("\n");

	for (i = 2; i < size; i++)
	{
		printf("----");
	}

	printf("\n");

	for (i = 2; i < size; i++)
	{
		printf("\n");
	}
	for (i = 2; i < size; i++)
	{
		printf("%4d\n", i);
	}

	printf("\n\n\n");

}


void seive()
{
	int i, j, root;

	for (int i = 2; i < size; i++)
	{
		ara[i] = 1;
	}

	root = sqrt(size);

	print_ara();

	for (i = 2; i <= root; i++)
	{
		if (ara[i] == 1)
		{
			for (j = 2; i*j <= size; j++)
			{
				ara[i*j]=0;
			}
			print_ara();
		}
	}
}


int is_prime(int n)
{
	int i;

	if (n < 2)
	{
		return 0;
	}
	return ara[n];

}


int main()
{
	int n,m;
	seive();
	while(1){
		printf("Please enter a number(enter 0 to exit): ");
		scanf("%d", &n);
		if (n == 0) {
			break;
		}
		if (n >= size) {
			/* code */
		}
	}

	return 0;
}
