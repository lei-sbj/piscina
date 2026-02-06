/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 18:36:23 by ljesus            #+#    #+#             */
/*   Updated: 2026/01/31 23:59:40 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	putnbr(int n)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
	{
		putnbr(n / 10);
	}
	ft_putchar((n % 10) + '0');
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	r;
	int	temp;

	p = 0;
	r = size - 1;
	while (p < r)
	{
		temp = tab[p];
		tab[p] = tab[r];
		tab[r] = temp;
		p++;
		r--;
	}
}

/* int	main(void)
{
	int	tab[];
	int	p;

	tab[] = {5, 5, 4, 3, 6, 6};
	ft_rev_int_tab(tab, 6);
	p = 0;
	while (p < 6)
	{
		putnbr(tab[p]);
		write(1, " ", 1);
		p++;
	}
	return (0);
}
 */