/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:07:53 by ljesus            #+#    #+#             */
/*   Updated: 2026/01/29 17:49:53 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

/* int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 1;
	ft_swap(&a, &b);
	printf("int a = %d, int b = %d\n", a,b);
	return (0);
}
 */