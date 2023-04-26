/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:20:36 by smlamali          #+#    #+#             */
/*   Updated: 2022/11/29 15:40:14 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;
	char	*s2;

	i = 0;
	if (!s || !f)
		return ;
	if (ft_strlen(s) > 4294967295)
		return ;
	s2 = s;
	while (s[i])
	{
		f((unsigned int)i, s2++);
		i++;
	}
}
