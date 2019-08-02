#ifndef VARI_H
#define VARI_H

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void startupfun(void) __attribute__ ((constructor));


#endif /* VARI_H */
