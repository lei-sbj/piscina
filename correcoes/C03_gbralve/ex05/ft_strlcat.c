/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabralve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 15:20:44 by gabralve          #+#    #+#             */
/*   Updated: 2026/01/25 20:33:20 by gabralve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	h;

	i = 0;
	j = 0;
	h = 0;
	while (dest[i] != '\0' && i < size)
		i++;
	while (src[j] != '\0')
		j++;
	if (i == size)
		return (i + j);
	while (src[h] != '\0' && (i + h) < (size - 1))
	{
		dest[h + i] = src[h];
		h++;
	}
	if (h + i < size)
		dest[h + i] = '\0';
	return (i + j);
}
//#include <stdio.h>
//int	main(void)
//{
//	char destine[20] = "Vai ";
//	char *source = "embora";
//	printf("%d",ft_strlcat(destine,source,20));	
//	
//	printf("%s", destine);
//	return (0);
//}
