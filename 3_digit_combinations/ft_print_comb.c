#include <unistd.h>

void	prints_numbers(int hun, int dec, int one)
{
	write(1, &hun, 1);
	write(1, &dec, 1);
	write(1, &one, 1);
	if (hun != '7')
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	hundreds;
	int	decimals;
	int	units;

	hundreds = '0';
	while (hundreds <= '7')
	{
		decimals = hundreds + 1;
		while (decimals <= '8')
		{
			units = decimals + 1;
			while (units <= '9')
			{
				prints_numbers(hundreds, decimals, units);
				units++;
			}
			decimals++;
		}
		hundreds++;
	}
}

int	main()
{
	ft_print_comb();
}