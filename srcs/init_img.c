/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_img.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bepoisso <bepoisso@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 08:44:46 by bepoisso          #+#    #+#             */
/*   Updated: 2024/12/04 09:21:17 by bepoisso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/so_long.h"

// Initalise all image in a struct
void	init_img(t_mlx_data *data)
{
	data->img.floor.path = "./imgs/floor.xpm";
	data->img.wall.path = "./imgs/wall.xpm";
	data->img.item.path = "./imgs/item.xpm";
	data->img.exit.path = "./imgs/exit.xpm";
	data->img.exit1.path = "./imgs/exit1.xpm";
	data->img.character_left.path = "./imgs/character_left.xpm";
	data->img.character_right.path = "./imgs/character_right.xpm";
	data->img.character_up.path = "./imgs/character_up.xpm";
	data->img.character_down.path = "./imgs/character_down.xpm";
	data->img.character1.path = "./imgs/character1.xpm";
	data->img.blinky.path = "./imgs/blinky_up.xpm";
	data->img.blinky.path_down = "./imgs/blinky_down.xpm";
	data->img.blinky.path_left = "./imgs/blinky_left.xpm";
	data->img.blinky.path_right = "./imgs/blinky_right.xpm";
	data->img.pinky.path = "./imgs/pinky_up.xpm";
	data->img.pinky.path_down = "./imgs/pinky_down.xpm";
	data->img.pinky.path_left = "./imgs/pinky_left.xpm";
	data->img.pinky.path_right = "./imgs/pinky_right.xpm";
	data->img.inky.path = "./imgs/inky_up.xpm";
	data->img.inky.path_down = "./imgs/inky_down.xpm";
	data->img.inky.path_left = "./imgs/inky_left.xpm";
	data->img.inky.path_right = "./imgs/inky_right.xpm";
	data->img.clyde.path = "./imgs/clyde_up.xpm";
	data->img.clyde.path_down = "./imgs/clyde_down.xpm";
	data->img.clyde.path_left = "./imgs/clyde_left.xpm";
	data->img.clyde.path_right = "./imgs/clyde_right.xpm";
	data->help.img.path = "./imgs/help_page.xpm";
	data->help.img.img
		= mlx_xpm_file_to_image(data->link, data->help.img.path,
			&data->help.img.width, &data->help.img.height);
	data->img.floor.img
		= mlx_xpm_file_to_image(data->link, data->img.floor.path,
			&data->img.floor.width, &data->img.floor.height);
	data->img.wall.img
		= mlx_xpm_file_to_image(data->link, data->img.wall.path,
			&data->img.wall.width, &data->img.wall.height);
	data->img.item.img
		= mlx_xpm_file_to_image(data->link, data->img.item.path,
			&data->img.item.width, &data->img.item.height);
	data->img.exit.img
		= mlx_xpm_file_to_image(data->link, data->img.exit.path,
			&data->img.exit.width, &data->img.exit.height);
	data->img.exit1.img
		= mlx_xpm_file_to_image(data->link, data->img.exit1.path,
			&data->img.exit1.width, &data->img.exit1.height);
	data->img.character_left.img
		= mlx_xpm_file_to_image(data->link, data->img.character_left.path,
			&data->img.character_left.width, &data->img.character_left.height);
	data->img.character_right.img
		= mlx_xpm_file_to_image(data->link, data->img.character_right.path,
			&data->img.character_right.width,
			&data->img.character_right.height);
	data->img.character_up.img
		= mlx_xpm_file_to_image(data->link, data->img.character_up.path,
			&data->img.character_up.width, &data->img.character_up.height);
	data->img.character_down.img
		= mlx_xpm_file_to_image(data->link, data->img.character_down.path,
			&data->img.character_down.width, &data->img.character_down.height);
	data->img.character1.img
		= mlx_xpm_file_to_image(data->link, data->img.character1.path,
			&data->img.character1.width, &data->img.character1.height);
	data->img.blinky.img
		= mlx_xpm_file_to_image(data->link, data->img.blinky.path,
			&data->img.blinky.width, &data->img.blinky.height);
	data->img.blinky.img_down
		= mlx_xpm_file_to_image(data->link, data->img.blinky.path_down,
			&data->img.blinky.width, &data->img.blinky.height);
	data->img.blinky.img_left
		= mlx_xpm_file_to_image(data->link, data->img.blinky.path_left,
			&data->img.blinky.width, &data->img.blinky.height);
	data->img.blinky.img_right
		= mlx_xpm_file_to_image(data->link, data->img.blinky.path_right,
			&data->img.blinky.width, &data->img.blinky.height);
	data->img.pinky.img
		= mlx_xpm_file_to_image(data->link, data->img.pinky.path,
			&data->img.pinky.width, &data->img.pinky.height);
	data->img.pinky.img_down
		= mlx_xpm_file_to_image(data->link, data->img.pinky.path_down,
			&data->img.pinky.width, &data->img.pinky.height);
	data->img.pinky.img_left
		= mlx_xpm_file_to_image(data->link, data->img.pinky.path_left,
			&data->img.pinky.width, &data->img.pinky.height);
	data->img.pinky.img_right
		= mlx_xpm_file_to_image(data->link, data->img.pinky.path_right,
			&data->img.pinky.width, &data->img.pinky.height);
	data->img.inky.img
		= mlx_xpm_file_to_image(data->link, data->img.inky.path,
			&data->img.inky.width, &data->img.inky.height);
	data->img.inky.img_down
		= mlx_xpm_file_to_image(data->link, data->img.inky.path_down,
			&data->img.inky.width, &data->img.inky.height);
	data->img.inky.img_left
		= mlx_xpm_file_to_image(data->link, data->img.inky.path_left,
			&data->img.inky.width, &data->img.inky.height);
	data->img.inky.img_right
		= mlx_xpm_file_to_image(data->link, data->img.inky.path_right,
			&data->img.inky.width, &data->img.inky.height);
	data->img.clyde.img
		= mlx_xpm_file_to_image(data->link, data->img.clyde.path,
			&data->img.clyde.width, &data->img.clyde.height);
	data->img.clyde.img_down
		= mlx_xpm_file_to_image(data->link, data->img.clyde.path_down,
			&data->img.clyde.width, &data->img.clyde.height);
	data->img.clyde.img_left
		= mlx_xpm_file_to_image(data->link, data->img.clyde.path_left,
			&data->img.clyde.width, &data->img.clyde.height);
	data->img.clyde.img_right
		= mlx_xpm_file_to_image(data->link, data->img.clyde.path_right,
			&data->img.clyde.width, &data->img.clyde.height);
	if (!data->img.floor.img)
		ft_perror("\nERROR loading floor image\n", data);
	if (!data->img.wall.img)
		ft_perror("\nERROR loading wall image\n", data);
	if (!data->img.item.img)
		ft_perror("\nERROR loading item image\n", data);
	if (!data->img.exit.img || !data->img.exit1.img)
		ft_perror("\nERROR loading exit image\n", data);
	if (!data->img.character_left.img)
		ft_perror("\nERROR loading character_left image\n", data);
	if (!data->img.character_right.img)
		ft_perror("\nERROR loading character_right image\n", data);
	if (!data->img.character_up.img)
		ft_perror("\nERROR loading character_up image\n", data);
	if (!data->img.character_down.img)
		ft_perror("\nERROR loading character_down image\n", data);
	if (!data->img.character1.img)
		ft_perror("\nERROR loading character1 image\n", data);
	if (!data->img.blinky.img || !data->img.blinky.img_down
		|| !data->img.blinky.img_left || !data->img.blinky.img_right)
		ft_perror("\nERROR loading clyde image\n", data);
	if (!data->img.pinky.img || !data->img.pinky.img_down
		|| !data->img.pinky.img_left || !data->img.pinky.img_right)
		ft_perror("\nERROR loading pinky image\n", data);
	if (!data->img.inky.img || !data->img.inky.img_down
		|| !data->img.inky.img_left || !data->img.inky.img_right)
		ft_perror("\nERROR loading inky image\n", data);
	if (!data->img.clyde.img || !data->img.clyde.img_down
		|| !data->img.clyde.img_left || !data->img.clyde.img_right)
		ft_perror("\nERROR loading clyde image\n", data);
	if (!data->help.img.img)
		ft_perror("\nERROR loading Help_page image\n", data);
}