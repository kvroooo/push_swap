/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 10:54:15 by smlamali          #+#    #+#             */
/*   Updated: 2022/11/29 11:08:29 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	int				i;
	char			*d;
	const char		*s;

	i = n - 1;
	d = (char *)dest;
	s = (char *)src;
	if (!d || !s)
		return (0);
	if (s > d)
		ft_memcpy(d, s, n);
	else
	{
		while (d[i] && i >= 0)
		{	
			d[i] = s[i];
			i--;
		}
	}
	return (dest);
}
