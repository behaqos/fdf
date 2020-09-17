#include <stdio.h>
#include "fdf.h"
int main(int argc, char **argv) {
	fdf     *data;

	data = ft_memalloc(sizeof(fdf));
	read_file(argv[1], data);
	return 0;
}
