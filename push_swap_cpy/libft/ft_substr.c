/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 15:59:51 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/01 15:36:39 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	char			*nstr;

	i = 0;
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	nstr = malloc(sizeof(char) * len + 1);
	if (!nstr)
		return (0);
	while (s[start] && len > 0)
	{
		nstr[i] = s[start];
		i++;
		start++;
		len--;
	}
	nstr[i] = '\0';
	return (nstr);
}
