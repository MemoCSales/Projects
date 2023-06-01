/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 03:10:46 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/03/16 23:21:31 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

/*
int	main()
{
	char	src[] = "Hello World!";
	char	dest[100];

	strcpy (dest, src);
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
*/