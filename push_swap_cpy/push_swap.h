/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:12:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/23 16:53:01 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct s_pile
{
	int	*a;
	int	*b;
	int	len;
	int	len_a;
	int	len_b;
}	t_pile;

//UTILS
void	ft_error(char *str);
void	ft_free(char **str);
int		ft_strlen2(char *str);
int		ft_atoi2(char *str);
int		verif_atoi(char *str);

//PARSE & UTILS
int		ft_check(char *arg, t_pile *pile);
int		ft_add(char **tmp, t_pile *pile);
int		ft_occur(t_pile *pile);

#endif