/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 21:44:48 by gabralve          #+#    #+#             */
/*   Updated: 2026/01/26 23:14:05 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("teste","teste",5));
	printf("%d\n", ft_strncmp("te te","teste",1));
	printf("%d\n", ft_strncmp("testes","teste",6));
	printf("%d\n", ft_strncmp("teste","testes",6));
	return (0);
}
