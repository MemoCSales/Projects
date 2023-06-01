#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
			continue ;
		}
		else if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
			continue ;
		}
		else
		{
			flag = 0;
			break ;
		}
	}
	return (flag);
}


int main ()
{
	char	str[] = "HiWorld";
	char	str2[] = "H1 World";
	char	str3[] = "";
	int	r1;
	int r2;
	int	r3;

	r1 = ft_str_is_alpha(str);
	r2 = ft_str_is_alpha(str2);
	r3 = ft_str_is_alpha(str3);

	printf("Result1: %d\n", r1);
	printf("Result2: %d\n", r2);
	printf("Result3: %d\n", r3);
	return (0);
}