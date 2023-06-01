/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcruz-sa <mcruz-sa@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 23:04:37 by mcruz-sa          #+#    #+#             */
/*   Updated: 2023/03/11 15:55:45 by mcruz-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	first;
	int	last;
	int	temp;

	first = 0;
	last = size - 1;
	while (first < last)
	{
		temp = *(tab + first);
		*(tab + first) = *(tab + last);
		*(tab + last) = temp;
		first++;
		last--;
	}
}

/*
int	main(void)
{
	int	array[6] = {3,2,5,6,2,1};
	int	size;
	int	i;

	i = 0;
	size = 6;
	ft_rev_int_tab(array, size);
	while (i < size)
	{
		printf("%d", *(array + i));
		i++;
	}
}
*/