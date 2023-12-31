/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avallet <avallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 13:46:32 by avallet           #+#    #+#             */
/*   Updated: 2023/12/21 09:34:22 by avallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

int	parsing_colors(t_data *data)
{
	int	i;

	if (!data->rgb_ceiling[3] || !data->rgb_floor[3])
		return (EXIT_FAILURE);
	i = -1;
	while (++i < 3)
	{
		if ((!data->rgb_ceiling[3]) || (!data->rgb_floor[3])
			|| (data->rgb_ceiling[i] < 0) || (data->rgb_floor[i] < 0)
			|| (data->rgb_ceiling[i]) > 255 || (data->rgb_floor[i] > 255))
			return (EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}

int	get_text_color(t_data *data, int x, int y, int i)
{
	return (*(int *)(data->img[i].addr + (y * data->img[i].line_len + x
			* (data->img[i].bpp / 8))));
}

int	get_int_color(int rgb[3])
{
	int	color;

	color = (((rgb[0]) & 0xff) << 16) + \
		(((rgb[1]) & 0xff) << 8) + ((rgb[2]) & 0xff);
	return (color);
}
