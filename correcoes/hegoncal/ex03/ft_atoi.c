/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 03:20:38 by hegoncal          #+#    #+#             */
/*   Updated: 2026/02/03 19:55:57 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str);

int	main(void)
{
	int	result;

	#include <stdio.h>

	result = ft_atoi("---+-+1234ab567");
	printf("result: %i\n", result);
}

int	ft_atoi(char *str)
{
	int	sign;
	int	i;
	int	n;

	sign = 1;
	i = 0;
	n = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while ((str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = n * 10 + (str[i] - '0');
		i++;
	}
	return (n * sign);
}
