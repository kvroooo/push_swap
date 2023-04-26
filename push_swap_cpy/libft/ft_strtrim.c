/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:25:49 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/01 15:36:28 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*nstr;

	i = 0;
	j = ft_strlen(s1);
	if (!set || !s1)
		return (0);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (j > 0 && ft_strchr(set, s1[j]))
		j--;
	if ((j - i) < 0)
		return (ft_strdup(""));
	nstr = ft_substr(s1, i, (j - i) + 1);
	return (nstr);
}
