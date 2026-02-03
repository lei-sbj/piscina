/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 19:30:05 by ljesus            #+#    #+#             */
/*   Updated: 2026/01/27 20:59:52 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int dc)//impressao por digitos
{
	ft_putchar(dc / 10 + '0');
	ft_putchar(dc % 10 + '0');
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;// n'ao pode ser b = 1 por que a dependencia de a ja garante que nao sejam valores iguais
		while (b <= 99)
		{
			ft_putnbr(a);
			write(1, " ", 1);
			ft_putnbr(b);
			if (!(a == 98 && b == 99))
				write(1, ", ", 2);
			b++;
		}
		a++;
	}//nao precisa inserir quebra de linha, pra sair 98 99$
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
