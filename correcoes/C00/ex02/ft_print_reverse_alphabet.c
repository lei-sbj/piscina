/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnunes-f <rnunes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/20 16:11:38 by rnunes-f          #+#    #+#             */
/*   Updated: 2026/01/26 18:38:10 by rnunes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)

{
	char	letra;

	letra = 'z';
	while (letra >= 'a')
	{
		ft_putchar(letra);
		letra--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	ft_putchar('\n');
// 	return (0);
// }
