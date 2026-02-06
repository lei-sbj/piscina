/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 17:23:59 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/31 19:17:36 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr_base(int nbr, char *base);
int	ft_validation(char *base, int b_len);

int	main(void)
{
	// https://www.rapidtables.com/convert/number/hex-to-decimal.html
	ft_putnbr_base(789465132, "0123456789ABCDEF");
}

int	ft_validation(char *base, int b_len)
{
	int	i;

	if (b_len <= 1)
		return (1);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] - base[i + 1] == 0)
			return (2);
		else if (base[i] == '-' || base[i] == '+')
			return (3);
		i++;
	}
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char		c;
	int			b_len;
	long int	lnbr;

	b_len = 0;
	while (base[b_len] != '\0')
		b_len++;
	if (ft_validation(base, b_len) != 0)
		return ;
	lnbr = nbr;
	if (lnbr < 0)
	{
		write(1, "-", 1);
		lnbr *= -1;
	}
	if (lnbr / b_len > 0)
		ft_putnbr_base((lnbr / b_len), base);
	c = base[lnbr % b_len];
	write(1, &c, 1);
}	
