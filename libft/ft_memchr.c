/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:18:28 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/01 15:32:08 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	unsigned const char	*s1;

	i = 0;
	s1 = s;
	if (!s)
		return (0);
	while (i < n)
	{
		if (s1[i] == (unsigned char)c)
			return ((unsigned char *)s1 + i);
		i++;
	}
	return (0);
}
