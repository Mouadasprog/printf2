/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:54:18 by mouad             #+#    #+#             */
/*   Updated: 2024/11/17 22:43:26 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>

int ft_putchar(char c);
int ft_putstr(char  *str);
int ft_putnbr_hex(unsigned long long    n);
int ft_putnbr_i(int n);
int ft_putnbr_u(unsigned int    n);
int ft_putnbr_X(unsigned int    n);
int ft_putnbr_x(unsigned int    n);
int ft_putnbr_d(int n);
int ft_putpercent(void);
int ft_printf(const char *format, ...);

#endif