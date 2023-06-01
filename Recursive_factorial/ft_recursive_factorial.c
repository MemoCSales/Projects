#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		return (ft_recursive_factorial(nb - 1) * nb);
	}
}

int	main()
{
	int	i;

	i = 4;
	printf("Factorial of \"%d\": %i\n", i, ft_recursive_factorial(i));
}