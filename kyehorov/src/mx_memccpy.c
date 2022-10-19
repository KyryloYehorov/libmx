#include "../inc/header.h"
void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
	if (n) {
		register unsigned char *tp = dst;
		register const unsigned char *fp = src;
		do {
			if ((*tp++ = *fp++) == c)
				return (dst);
		} while (--n != 0);
	}
	return (0);
}
