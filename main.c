/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smlamali <smlamali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 12:22:52 by smlamali          #+#    #+#             */
/*   Updated: 2023/05/05 14:52:56 by smlamali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_data	data = {0};
	int				i;

	i = 0;
	if (argc == 1)
		return (0);
	if (ft_check(argv, &data) != 0)
		return (ft_error("syntaxe :/"), 0);
	while (i < data.len)
		printf("[%d]", data.a[i++]);
	smoll_sort(&data);
	printf("\n------ END ------\n");
	free(data.a);
}
