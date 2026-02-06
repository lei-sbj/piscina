/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 14:26:48 by lucahenr          #+#    #+#             */
/*   Updated: 2026/02/02 13:31:58 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep);
int		ft_strlen(char *str);
char	*ft_strcat(char *dest, char *src);
/*
#include <stdio.h>
int	main(void)
{
	char *strings[] = {"Hello", "World", "123", "!!!"};
	char	*sep = "###";
	printf("%s\n", ft_strjoin(4, strings, sep));
	return (0);
}	
*/

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	int		index;
	char	*str;

	total_len = 0;
	index = 0;
	while (index < size)
	{
		total_len += ft_strlen(strs[index]);
		index++;
	}
	str = (char *)malloc(sizeof(char *) * (total_len + size));
	str[0] = '\0';
	index = 0;
	while (index < size)
	{
		ft_strcat(str, strs[index]);
		if (index < size - 1)
			ft_strcat(str, sep);
		index++;
	}
	str[total_len + (size * ft_strlen(sep)) + 1] = '\0';
	return (str);
}

int	ft_strlen(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
			index++;
	}
	return (index);
}

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	index2;

	index = 0;
	index2 = 0;
	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[index2] != '\0')
	{
		dest[index + index2] = src[index2];
		index2++;
	}
	dest[index + index2] = '\0';
	return (dest);
}
