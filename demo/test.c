#include "test.h"


void	test_calloc()
{
	ft_broken_calloc(1, 1);
}

int	main(void)
{
	test_mallocs(test_calloc);
	return (0);
}
