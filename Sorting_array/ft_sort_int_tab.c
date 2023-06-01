#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (*(tab + j) > *(tab + j + 1))
			{
				temp = *(tab + j);
				*(tab + j) = *(tab + j + 1);
				*(tab + j + 1) = temp;
			}
			j++;
		}
		i++;
	}
}


int	main(void)
{
	int	array[] = {3, 2, 1};
	int	size;
	int	i;

	i = 0;
	size = sizeof(array) / sizeof(array[0]);
	ft_sort_int_tab(array, size);
	while (i < size)
	{
		printf("%d", *(array + i));
		i++;
	}
}