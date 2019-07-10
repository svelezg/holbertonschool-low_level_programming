#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

/*
 * Structs, enums and unions definitions
 * Typedefs
 * Function prototypes
 */
int wildcmp(char *s1, char *s2);

int is_palindrome(char *s);

int is_prime_number(int n);

int _sqrt_recursion(int n);

int _pow_recursion(int x, int y);

int factorial(int n);

int _strlen_recursion(char *s);

void _print_rev_recursion(char *s);

void _puts_recursion(char *s);

void set_string(char **s, char *to);

void print_diagsums(int *a, int size);

void print_chessboard(char (*a)[8]);

char *_strstr(char *haystack, char *needle);

char *_strpbrk(char *s, char *accept);

unsigned int _strspn(char *s, char *accept);

char *_strchr(char *s, char c);

char *_memcpy(char *dest, char *src, unsigned int n);

char *_memset(char *s, char b, unsigned int n);

char *infinite_add(char *n1, char *n2, char *r, int size_r);

void print_number(int n);

char *rot13(char *);

char *leet(char *);

char *cap_string(char *);

char *string_toupper(char *);

void reverse_array(int *a, int n);

int _strcmp(char *s1, char *s2);

char *_strncpy(char *dest, char *src, int n);

char *_strncat(char *dest, char *src, int n);

char *_strcat(char *dest, char *src);

int _atoi(char *s);

char *_strcpy(char *dest, char *src);

void print_array(int *a, int n);

void puts_half(char *str);

void puts2(char *str);

void rev_string(char *s);

void print_rev(char *s);

void _puts(char *str);

int _putchar(char c);

int _isupper(int c);

int _isdigit(int c);

int mul(int a, int b);

void print_numbers(void);

void print_most_numbers(void);

void more_numbers(void);

void print_line(int n);

void print_diagonal(int n);

void print_square(int size);

void print_triangle(int size);

void print_number(int n);

void reset_to_98(int *n);

void swap_int(int *a, int *b);

int _strlen(char *s);

#endif /* _HOLBERTON_H_ */
