/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 19:56:13 by gabralve          #+#    #+#             */
/*   Updated: 2026/01/26 23:08:09 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strcmp("teste","teste"));
	printf("%d\n", ft_strcmp("t ste","teste"));
	printf("%d\n", ft_strcmp("t\tste","teste"));
	printf("%d\n", ft_strcmp("t3ste","teste"));
	printf("%d\n", ft_strcmp("","teste"));
	printf("%d\n", ft_strcmp("teste",""));
	return (0);
}
