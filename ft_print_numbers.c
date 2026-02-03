/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 19:41:03 by ljesus            #+#    #+#             */
/*   Updated: 2026/01/24 19:56:44 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	n;

	n = '0';
	while (n <= '9')
	{
		write (1, &n, 1);
		n++;
	}
}
/* // outra opçao que rodou
{
	char	n;

	n = 48; //sem aspas simples a saida foi byte em branco
	while (n <= 57)
	{
		write (1, &n, 1);
		n++;
	}
}*/

int	main(void)
{
	ft_print_numbers ();
	return (0);
}
