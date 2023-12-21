/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:47:52 by avallet           #+#    #+#             */
/*   Updated: 2023/12/21 09:34:22 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

int	tab_len(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

void	ft_error(char *message)
{
	ft_putstr_fd("Error\n", STDERR_FILENO);
	ft_putstr_fd(message, STDERR_FILENO);
}

int	text_colors_filled(t_data *data)
{
	if (!data->img[1].path || !data->img[2].path || !data->img[3].path
		|| !data->img[4].path)
		return (1);
	if (!data->rgb_ceiling[3] || !data->rgb_floor[3])
		return (1);
	return (0);
}

int	text_filled(t_data *data)
{
	if (!data->img[1].path || !data->img[2].path || !data->img[3].path
		|| !data->img[4].path)
		return (1);
	return (0);
}

int	colors_filled(t_data *data)
{
	if (!data->rgb_ceiling[3] || !data->rgb_floor[3])
		return (1);
	return (0);
}
