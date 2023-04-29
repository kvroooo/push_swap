/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/04/29 18:04:01 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_data	data = {0};

	if (argc == 1)
		return (0);
	data.a = ft_parse(argv, &data);
	if (data.a == 0)
		return (ft_error("retry with a good list plz ^^"), 0);
}

// if (ft_check(argv) != 0)
	// {
	// 	ft_error("retry with good number pls :C");
	// 	return (0);
	// }