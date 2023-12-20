/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emoreau <emoreau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:07:33 by emoreau           #+#    #+#             */
/*   Updated: 2023/12/20 15:07:39 by emoreau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <../includes/cub3d.h>

void	ft_free(t_data *data)
{
	int	i;

	i = -1;
	if (data->rgb_ceiling)
		free(data->rgb_ceiling);
	if (data->rgb_floor)
		free(data->rgb_floor);
	if (data->map_char)
		free_tab(data->map_char);
	if (data->ray)
		free(data->ray);
	while (++i < 5)
	{
		if (data->img[i].path)
			free(data->img[i].path);
	}
}

void	ft_free2(t_data *data)
{
	int	i;

	i = -1;
	free(data->rgb_ceiling);
	free(data->rgb_floor);
	if (data->ray)
		free(data->ray);
	while (++i < 5)
	{
		if (data->img[i].path)
			free(data->img[i].path);
	}
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return ;
	while (tab[i])
	{
		if (tab[i])
			free(tab[i]);
		i++;
	}
	if (tab)
		free(tab);
}

void	close_all(t_data *data)
{
	int	i;

	i = -1;
	while (++i < 5)
		mlx_destroy_image(data->mlx_ptr, data->img[i].img_ptr);
	mlx_destroy_window(data->mlx_ptr, data->win_ptr);
	data->win_ptr = NULL;
	mlx_destroy_display(data->mlx_ptr);
	free(data->mlx_ptr);
}
