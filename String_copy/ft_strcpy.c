#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	if (dest != src)
	{
		i = 0;
		while (*(src + i) != '\0')
		{
			*(dest + i) = *(src + i);
			i++;
		}
	*(dest + i) = '\0';
	}
	return (dest);
}


int	main()
{
	int	i;
	char	src[13] = "Hello World!";
	char	dest[50];

	i = 0;
	ft_strcpy(dest, src);
	while (*(dest + i) != '\0')
	{
		write(1, &(*((dest + i))), 1);
		i++;
	}
	return (0);
}
