/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 00:07:11 by ljesus            #+#    #+#             */
/*   Updated: 2026/02/01 01:26:24 by ljesus           ###   ########.fr       */
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

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	p;
	int	aux; //validação 1 ou 0

	aux = 1;
	while (aux)
	{
		aux = 0;
		p = 0;
		while (p < (size - 1)) //compara até o penúltimo
		{
			if (tab[p] > tab[p + 1])
			{
				ft_swap(&tab[p], &tab[p + 1]);
				aux = 1; //avisa para reiniciar o loop agr com a troca feita
			}
			p++;
		}
	}
}

/* int	main(void)
{
	int	tab[6] = {5, 8, 4, 3, 6, 6};
	int	p;

	ft_sort_int_tab(tab, 6);
	p = 0;
	while (p < 6)
	{
		putnbr(tab[p]);
		write(1, " ", 1); //ta saindo com espaço ao final
		p++;
	}
	return (0);
} */