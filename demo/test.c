#include "test.h"


void	test_calloc()
{
	ft_broken_calloc(1, 1);
}

int	main(void)
{
	malloc_failer(test_calloc);
	return (0);
}
