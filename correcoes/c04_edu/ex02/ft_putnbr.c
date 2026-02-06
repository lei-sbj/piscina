/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 16:17:25 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/31 19:07:58 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int nb);

int	main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1);
	ft_putnbr(-42);
	write(1, "\n", 1);
	ft_putnbr(2147483647);
	write(1, "\n", 1);
	ft_putnbr(-2147483648);
	write(1, "\n", 1);
}

void	ft_putnbr(int nb)
{
	char		c;
	long int	lnb;

	lnb = nb;
	if (lnb < 0)
	{
		write (1, "-", 1);
		lnb *= -1;
	}
	if (lnb / 10 != 0)
		ft_putnbr(lnb / 10);
	c = '0' + (lnb % 10);
	write (1, &c, 1);
}
