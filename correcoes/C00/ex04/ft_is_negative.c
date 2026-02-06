/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnunes-f <rnunes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 14:53:15 by rnunes-f          #+#    #+#             */
/*   Updated: 2026/01/28 11:07:38 by rnunes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		ft_putchar('N');
	}
	else
	{
		ft_putchar('P');
	}
}

// int main(void)
// {
// 	ft_is_negative(8);
// 	ft_is_negative(-10);
// 	ft_is_negative(0);
// 	ft_is_negative(42);
// 	ft_putchar('\n');
// 	return (0);
// }