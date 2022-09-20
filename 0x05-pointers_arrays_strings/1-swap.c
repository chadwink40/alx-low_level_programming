#include "main.h"

/**
 *swap_int - this swpas two integers
 *@a: - A pointer will be updated with the B value
 *@b: - B Pointer will be updated with the A value
 *Return void
 */

void swap_int(int *a, int *b)
{
int swap;

swap = *a;
*a = *b;
*b = swap;
}
