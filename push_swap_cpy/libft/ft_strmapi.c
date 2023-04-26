/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 15:16:36 by smlamali          #+#    #+#             */
/*   Updated: 2022/11/29 15:31:45 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*nstr;

	i = 0;
	if (!s || !f)
		return (0);
	if (ft_strlen(s) > 4294967295)
		return (0);
	nstr = malloc(ft_strlen(s) + 1);
	if (!nstr)
		return (0);
	while (s[i])
	{
		nstr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	nstr[i] = '\0';
	return (nstr);
}
