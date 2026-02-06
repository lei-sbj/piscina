/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 09:38:14 by lucahenr          #+#    #+#             */
/*   Updated: 2026/02/02 12:12:11 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);
int	*ft_range(int min, int max);
/*
#include <stdio.h>
int	main (void)
{
	int min = 1;
	int max = 5;
	int *array = ft_range(min, max);
	int len = ft_ultimate_range(&array, min, max);

	printf("Array ordenado de %d a %d (excluindo %d): ", min, max, max);
	for (int i = 0; array[i]; i++)
		printf("%d", array[i]);
	printf("\nTamanho do array: %d\n", len);
	return (0);
}
*/

int	ft_ultimate_range(int **range, int min, int max)
{
	int	index;

	index = 0;
	*range = ft_range(min, max);
	while (min < max)
	{
		min++;
		index++;
	}
	return (index);
}

int	*ft_range(int min, int max)
{
	int	*array;
	int	len;
	int	index;

	if (min >= max)
	{
		return (0);
	}
	index = 0;
	len = max - min;
	array = (int *)malloc(len * sizeof(int));
	while (index < len)
	{
		array[index] = min;
		min++;
		index++;
	}
	return (array);
}
