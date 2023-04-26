/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 14:55:26 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/23 17:34:27 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ft_error(char *str)
{
	write(1, "Error : ", 9);
	write(1, str, ft_strlen2(str));
	write(1, "\n", 1);
}

int	ft_strlen2(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi2(char *str)
{
	int		i;
	int		nb;
	int		sign;

	i = 0;
	nb = 0;
	sign = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = 10 * nb + (str[i] - 48);
		i++;
	}
	return (nb * sign);
}

//Check s'il y a des 0 inutiles devant un nombre
//Check si int superieur aux limites
int	verif_atoi(char *str)
{
	int	nb;
	int	i;

	i = 0;
	nb = ft_atoi2(str);
	while (str[i++])
	{
		if (str[i] == '0' && str[i + 1] != '\0')
			return (1);
	}
	if (nb < -2147483647)
		return (1);
	return (0);
}
