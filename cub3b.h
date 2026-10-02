#ifndef CUB3D_H
# define CUB3D_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>
# include <math.h>
# include <stdio.h>
# include "mlx.h"

# define WIN_WIDTH 1280
# define WIN_HEIGHT 720

typedef struct s_player
{
	double	x;
	double	y;
	double	dir_x;
	double	dir_y;
	double	plane_x;
	double	plane_y;
}	t_player;

typedef struct s_texture
{
	char	*north_path;
	char	*south_path;
	char	*west_path;
	char	*east_path;

	void	*north_img;
	void	*south_img;
	void	*west_img;
	void	*east_img;
}	t_texture;

typedef struct s_image
{
	void	*img;
	char	*addr;
	int		bpp;
	int		line_len;
	int		endian;
}	t_image;

typedef struct s_map
{
	char	**grid;
	int		width;
	int		height;
}	t_map;

typedef struct s_game
{
	void		*mlx;
	void		*win;

	t_image		screen;
	t_map		map;
	t_player	player;
	t_texture	texture;

	int			floor_color;
	int			ceiling_color;
}	t_game;

#endif