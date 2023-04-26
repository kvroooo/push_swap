/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:22:18 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/25 18:28:38 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lsize;

	i = 0;
	j = 0;
	lsize = ft_strlen(little);
	if (!big)
		return (NULL);
	if (little[i] == '\0')
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		while (big[i] == little[j] && i < len)
		{
			i++;
			j++;
		}
		i = i - j;
		if (j == lsize)
			return ((char *)big + i);
		j = 0;
		i++;
	}
	return (0);
}
