/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:39:04 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/29 18:00:42 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include "libft/libft.h"

// typedef struct s_pile
// {
// 	int		nb;
// 	int		index;
// 	s_pile	*next;	
// }	t_pile;

typedef struct s_data
{
	int	*a;
	int	*b;
	int	index;
	int	len;
	int	len_a;
	int	len_b;
}	t_data;

int		ft_check(char **arg);
void	ft_error(char *str);
int		*ft_parse(char **arg, t_data *pile);

#endif