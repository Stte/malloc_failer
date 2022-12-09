#include <stdlib.h>

/**
 * @brief Tests malloc fails.
 *
 * First runs once and counts all the malloc calls.
 * Then fails mallocs one by one
 * by recalling the function as many times
 * as malloc was called and failing the next malloc each call.
 *
 * @param p void function pointer. Should be callable without parameters.
 */
void	malloc_failer(void (*p)());
