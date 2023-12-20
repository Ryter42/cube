/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:06 by jarthaud          #+#    #+#             */
/*   Updated: 2023/12/20 15:19:55 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

int	main(int ac, char **av)
{
	t_data	data;

	if (check_arg(ac, av))
		return (EXIT_FAILURE);
	if (data_init(&data))
		return (ft_free(&data), EXIT_FAILURE);
	if (get_data_map(av[1], &data))
		return (ft_free2(&data), EXIT_FAILURE);
	if (get_map(av[1], &data))
		return (ft_free2(&data), EXIT_FAILURE);
	if (parsing(&data))
		return (ft_free(&data), EXIT_FAILURE);
	if (game_init(&data))
		return (ft_free(&data), EXIT_FAILURE);
	game_loop(&data);
	return (EXIT_SUCCESS);
}

int	check_arg(int ac, char **av)
{
	int	i;

	if (ac != 2)
		return (ft_error("BAD NUMBER OF ARGUMENTS\n"), EXIT_FAILURE);
	if ((access(av[1], F_OK)) || (access(av[1], R_OK)))
		return (ft_error("MAP NOT FOUND\n"), EXIT_FAILURE);
	i = 0;
	while (av[1][i] != '.' && av[1][i])
		i++;
	if (av[1][i + 1] == 'c' && av[1][i + 2] == 'u'
		&& av[1][i + 3] == 'b' && av[1][i + 4] == '\0')
		return (EXIT_SUCCESS);
	else
		return (ft_error("WRONG MAP NAME\n"), EXIT_FAILURE);
}
