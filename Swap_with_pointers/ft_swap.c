#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}


int main(void)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	printf("Initial value of a = %d\n", a);
	printf("Initial value of b = %d\n", b);

	ft_swap(&a, &b);
	printf("Value of a after calling the function =%d\n", a);
	printf("Value of b after calling the function =%d\n", b);
}
