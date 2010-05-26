/* Copy memory to memory */
void memcpy (void* dst, const void* src, int cnt) {
	char *d = (char*)dst;
	const char *s = (const char *)src;
	while (cnt--) *d++ = *s++;
}

/* Fill memory */
void memset (void* dst, int val, int cnt) {
	char *d = (char*)dst;
	while (cnt--) *d++ = (char)val;
}

/* Compare memory to memory */
int memcmp (const void* dst, const void* src, int cnt) {
	const char *d = (const char *)dst, *s = (const char *)src;
	int r = 0;
	while (cnt-- && (r = *d++ - *s++) == 0) ;
	return r;
}

int strlen(char *str)
{
	int i = 0;

	while (str[i++] != '\0')
		;

	return i - 1;
}

char *strcpy(char *dst, char *src)
{
	char *bak = dst;

	// In the simple implimentation, bypass ptr check for dst and src
	while ((*dst++ = *src++) != '\0')
		;

	return bak;
}
