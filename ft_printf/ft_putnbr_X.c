/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_X.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:33:38 by mouad             #+#    #+#             */
/*   Updated: 2024/11/17 22:34:40 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_X(unsigned int    n)
{
        char    *hex_digits;
    int count;

    hex_digits = "0123456789ABCDEF";
    count = 0;

    if(n == 0)
    {
        ft_putchar('0');
    }
    if(n >= 16)
    {
        count += ft_putnbr_X(n / 16);
    }
    count += ft_putchar(hex_digits[n % 16]);
    return count;
}