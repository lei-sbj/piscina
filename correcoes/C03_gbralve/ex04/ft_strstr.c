/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljesus <ljesus@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 14:27:02 by gabralve          #+#    #+#             */
/*   Updated: 2026/01/26 23:21:19 by ljesus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*to_find)
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] == str[i + j]
			&& to_find[j] != '\0')
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main(void)
{
	printf("%s",ft_strstr("abcdefghasdajghffghksdkjakdakdkashd","fgh"));
	return (0);
}
