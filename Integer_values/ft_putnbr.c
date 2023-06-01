#include <unistd.h>

int	countdigit(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

void	print_num(int temp, int nb)
{
	int	temp2;
	int	count;

	count = countdigit(nb);
	temp2 = nb / temp + 48;
	write(1, &temp2, 1);
	while (count != 1)
	{
		temp = temp / 10;
		temp2 = (nb / temp) % 10 + 48;
		write(1, &temp2, 1);
		count--;
	}
}

void	ft_putnbr(int nb)
{
	int	count;
	int	i;
	int	temp;

	count = countdigit(nb);
	i = 1;
	while (count > 1)
	{
		temp = i * 10;
		i = temp;
		count--;
	}
	if (nb == 0)
		write(1, "0", 1);
	else if (nb < 0)
	{
		if (nb == -2147483648)
			write(1, "-2147483648", 11);
		else
		{
			write(1, "-", 1);
			nb *= -1;
			print_num(temp, nb);
		}
	}
	else
		print_num(temp, nb);

}


int	main(void)
{
	ft_putnbr(2147483647);
}
