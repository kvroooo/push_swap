/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 16:49:04 by smlamali          #+#    #+#             */
/*   Updated: 2022/11/29 11:30:18 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		ls;
	char	*str;

	i = 0;
	ls = ft_strlen((char *)s);
	str = malloc (sizeof(char) * ls + 1);
	if (!str)
		return (0);
	while (i < ls)
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
