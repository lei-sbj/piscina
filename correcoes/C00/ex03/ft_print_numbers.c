/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnunes-f <rnunes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:32:32 by rnunes-f          #+#    #+#             */
/*   Updated: 2026/01/28 11:10:30 by rnunes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char n)
{
	write(1, &n, 1);
}

void	ft_print_numbers(void)
{
	char	num;

	num = '0';
	while (num <= '9')
	{
		ft_putchar(num);
		num++;
	}
}
// int main (void)
// {
//     ft_print_numbers(); //chamando a função criada
//     ft_putchar('\n'); // pula uma linha no terminal para o codigo ficar limpo
//     return (0);
// }