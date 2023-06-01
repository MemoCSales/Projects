#include <unistd.h>

void	print_digits(int a, int b)
{
	int	a_f;
	int	a_s;
	int	b_f;
	int	b_s;

	a_f = a / 10 + 48;
	a_s = a % 10 + 48;
	b_f = b / 10 + 48;
	b_s = b % 10 + 48;
	write(1, &a_f, 1);
	write(1, &a_s, 1);
	write(1, &" ", 1);
	write(1, &b_f, 1);
	write(1, &b_s, 1);
	if (a != 98)
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 98)
	{
		while (b <= 99)
		{
			print_digits(a, b);
			b++;
		}
	a++;
	b = a + 1;
	}
}

int	main()
{
	ft_print_comb2();
}