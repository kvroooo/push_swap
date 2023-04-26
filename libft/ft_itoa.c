/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:20:19 by smlamali          #+#    #+#             */
/*   Updated: 2022/12/01 15:32:03 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_size(int n, size_t size)
{
	size++;
	if (n < 0)
		size = ft_size(-n, size);
	else if (n >= 10)
		size = ft_size(n / 10, size);
	return (size);
}

void	ft_reverse(char *s)
{
	char	tmp;
	size_t	i;
	size_t	size;

	i = 0;
	size = ft_strlen(s) - 1;
	if (s[0] == '-')
		i++;
	while (i < size)
	{
		tmp = s[i];
		s[i] = s[size];
		s[size] = tmp;
		i++;
		size--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	str = ft_calloc(ft_size(n, 0) + 1, sizeof(char));
	if (n < 0)
	{
		str[i] = '-';
		n = n * (-1);
		i++;
	}
	while (n >= 0)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		if (n == 0)
			n = -1;
		i++;
	}
	str[i] = '\0';
	ft_reverse(str);
	return (str);
}
