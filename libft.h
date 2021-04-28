#ifndef LIBFT_H
#define LIBFT_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
void ft_bzero(void *s, size_t n);
int ft_isdigit(unsigned c);
int ft_isascii(int c);
void * ft_calloc(size_t count, size_t size);
int ft_isalpha(int c);
int ft_strncmp(char *s1, char *s2, unsigned int n);
size_t ft_strlen(const char *s);
int ft_strcmp(char *s1, char *s2);
void * ft_memset(void *b, int c, size_t len);
int ft_toupper(int c);
int ft_tolower(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dst, const void *src, size_t n);
int ft_atoi(const char *str);
char *ft_strndup(char *s1, size_t n);
char *ft_strdup(const char *s1);
size_t ft_strlcpy(char *dest,const char *src,size_t size);
char *ft_substr(char const *s, unsigned int start,size_t len);
void	ft_putchar_fd(char c, int fd);
void	ft_putchar_fd(char c, int fd);
char *ft_strtrim(char *s, char *set);
#endif
