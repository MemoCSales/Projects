#include <unistd.h>
#include <stdio.h>

int	ft_symbcheck(char str)
{
	if (str <= '9' && str >= '0')
		return (3);
	else if (str >= 'A' && str <= 'Z')
		return (2);
	else if (str >= 'a' && str <= 'z')
		return (1);
	else
		return (0);
}

void	capitalize(char *str)
{
	int	new_word;

	new_word = 1;
	while (*str)
	{
		if (ft_symbcheck(*str) && new_word && ft_symbcheck(*str) != 2)
			*str -= 32;
		new_word = 0;
		str++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (ft_symbcheck(str[0]) == 1)
	{
		capitalize(&str[0]);
		i++;
	}
	while (str[i] != '\0')
	{
		if (ft_symbcheck(str[i]) == 1 && (!ft_symbcheck(str[i - 1])))
			capitalize(&str[i]);
		else if (ft_symbcheck(str[i]) == 2 && ft_symbcheck(str[i - 1]) != 0)
			str[i] += 32;
		i++;
	}
	return (str);
}


int	main()
{
	//char str[] = "42kARAte it's like+minus/sadaDDs\\42asfasf;wwwwqrqw: wqdwqdqwd";
	char str[] = "SaLut, comMent tu VAs ? 42mots quarante-deux; cinquante+et+un";
	//char	str[] = "SChoOl ANtOn-aNtOn - 8anton";
	
	printf("\nOld string: %s\n", str);
	printf("\nNew String: %s\n", ft_strcapitalize(str));
	return (0);
}
