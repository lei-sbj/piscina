/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnunes-f <rnunes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 15:59:06 by rnunes-f          #+#    #+#             */
/*   Updated: 2026/01/21 13:40:34 by rnunes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_alphabet(void)

{
	char	letra;

	letra = 'a';
	while (letra <= 'z')
	{
		ft_putchar(letra);
		letra++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	ft_putchar('\n');
// 	return (0);
// }
