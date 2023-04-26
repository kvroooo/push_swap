/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 14:58:22 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/01 15:36:07 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	oc;

	i = 0;
	oc = -1;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)s + ft_strlen(s));
	if (!(ft_isascii(c)))
		return ((char *)s);
	if (ft_strchr(s, c) == 0)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
			oc = i;
		i++;
	}
	if (oc != -1)
		return ((char *)s + oc);
	return (0);
}
