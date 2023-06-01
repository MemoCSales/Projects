#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}


int main()
{
	char	str[] = "Hello";
	int	count;

	count = ft_strlen(str);
	printf("Count of characters: %d\n",count);
	return (0);
}
