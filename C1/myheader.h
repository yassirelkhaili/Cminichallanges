#ifndef MYHEADER_H
#define MYHEADER_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void ft_putstr(char *str);

int ft_malloc(char **name);

int ft_atoi(char *str);

double ft_atof(const char *str);

int ft_div(int a, int b);

int ft_mod(int a, int b);

int ft_sum(int a, int b);

int ft_mult(int a, int b);

int ft_sub(int a, int b);

void ft_putnbr(int nbr);

int ft_strlen(char *str);

void ft_putchar(char c);

#endif