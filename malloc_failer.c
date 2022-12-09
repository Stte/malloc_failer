#include "malloc_failer.h"

extern void	*__real_malloc(size_t i);

int	malloc_call_count_total = 0;
int	first_run = 1;

void	*__wrap_malloc(size_t i)
{
	static int	prev_tested_malloc = -1;
	static int	malloc_call_count = 0;

	if (first_run)
	{
		malloc_call_count_total++;
		return (__real_malloc(i));
	}
	if (malloc_call_count == prev_tested_malloc + 1)
	{
		prev_tested_malloc++;
		malloc_call_count = 0;
		return (NULL);
	}
	malloc_call_count++;
	return (__real_malloc(i));
}

void	malloc_failer(void (*p)())
{
	p();
	first_run = 0;
	while (malloc_call_count_total > 0)
	{
		p();
		malloc_call_count_total--;
	}
}

