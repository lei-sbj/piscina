/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucahenr <lucahenr@student.42sp.org.b      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 07:57:56 by lucahenr          #+#    #+#             */
/*   Updated: 2026/01/29 08:39:45 by lucahenr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src);
int		ft_strlen(char *str);
/*
#include <stdio.h>
int	main (void)
{
	char	string[] = "String que vai ser copiada";

	printf("Conteudo da func ft_strdup: %s\n", ft_strdup(string));
	return (0);
}
*/

char	*ft_strdup(char *src)
{
	char	*str;
	int		index;

	index = 0;
	str = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	while (src[index] != '\0')
	{
		str[index] = src[index];
		index++;
	}
	str[index] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
