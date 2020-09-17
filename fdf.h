
#ifndef FDF_FDF_H
#define FDF_FDF_H

#include "./libft/includes/libft.h"
#include "minilibx_mms_20191025_beta/mlx.h"
#include "fcntl.h"

typedef struct
{
	int     width;
	int     height;
	int     **z_matrix;

	void    *mlx_ptr;
	void    *win_ptr;
}           fdf;
void        read_file(fdf *data, char *file_name);

#endif //FDF_FDF_H
