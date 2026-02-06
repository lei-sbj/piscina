/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:00:26 by ljesus            #+#    #+#             */
/*   Updated: 2026/02/01 00:00:44 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	d;
	int	r;

	d = *a / *b;
	r = *a % *b;
	*a = d;
	*b = r;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 20;
	b = 3;
	ft_ultimate_div_mod(&a, &b);
	printf("Resultado da divisão = %d, resto %d\n", a, b);
	return (0);
}
 */