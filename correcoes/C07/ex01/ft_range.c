/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 08:42:57 by lucahenr          #+#    #+#             */
/*   Updated: 2026/02/02 13:25:07 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);
#include <stdio.h>
int	main (void)
{
	int	min = 1;
	int	max = 40;
	int	index = 0;

	if (ft_range(min, max) != 0)
	{
		printf("Os numeros entre %d e %d (excluindo %d) sao: ", min, max, max);
		while (index < (max - min))
		{
			printf("%d", ft_range(min, max)[index]);
			index++;
		}
	}
	else
	{
		printf("O valor definido em min é maior do que valor em max\nErro");
	}
	printf("\n");
	return (0);
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
