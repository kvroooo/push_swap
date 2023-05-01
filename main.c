/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/01 14:43:47 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_data	data = {0};

	if (argc == 1)
		return (0);
	if (ft_check(argv, &data))
		return (ft_error("syntaxe :/"), 0);
	free(data.a);
}

// if (ft_check(argv) != 0)
	// {
	// 	ft_error("retry with good number pls :C");
	// 	return (0);
	// }