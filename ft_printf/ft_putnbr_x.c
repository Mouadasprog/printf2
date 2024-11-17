/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:30:34 by mouad             #+#    #+#             */
/*   Updated: 2024/11/18 00:05:28 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_x(unsigned int    n)
{
    char    *hex_digits;
    int count;

    hex_digits = "0123456789abcdef";
    count = 0;

    if(n == 0)
    {
        count += ft_putchar('0');
        return count;
    }
    if(n >= 16)
    {
        count += ft_putnbr_x(n / 16);
    }
    count += ft_putchar(hex_digits[n % 16]);
    return count;
}