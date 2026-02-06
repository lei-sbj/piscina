/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 16:18:41 by ljesus            #+#    #+#             */
/*   Updated: 2026/02/01 00:00:14 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
//	*str = str[i];
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/* int	main(void)
{
	int	n;

	n = ft_strlen("A noite longa");
	printf("O tamanho da string é: %d\n", n);
	return (0);
}
 */