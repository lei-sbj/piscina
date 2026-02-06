/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:35:07 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/31 19:10:27 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_atoi(char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ft_atoi(argv[1]));
}

int	ft_atoi(char *str)
{
	int	atoi;
	int	sign;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	sign = 1;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign *= -1;
		str++;
	}
	atoi = 0;
	while (*str >= '0' && *str <= '9')
	{
		atoi *= 10;
		atoi += (*str - '0');
		str++;
	}
	return (atoi * sign);
}
