/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduaaugu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/21 15:46:48 by eduaaugu          #+#    #+#             */
/*   Updated: 2026/01/21 16:00:06 by eduaaugu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include  <stdio.h>

int ft_strlen(char *str);

int main(void)
{
	char *s = "Hello, 42!";

	printf("'%s' has %i characters", s, ft_strlen(s));
}
*/
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
