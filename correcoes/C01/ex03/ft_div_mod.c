/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:59:51 by ljesus            #+#    #+#             */
/*   Updated: 2026/01/29 18:53:28 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int	main(void)
{
	int	div;
	int	mod;

	ft_div_mod(20, 3, &div, &mod);
	printf("a/b = %d\nResto = %d\n", div, mod);
	return (0);
}
 */