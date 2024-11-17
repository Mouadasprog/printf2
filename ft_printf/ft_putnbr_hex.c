/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:13:04 by mouad             #+#    #+#             */
/*   Updated: 2024/11/18 00:05:38 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_hex(unsigned long long    n)
{
    char    *hex_digits;
    int count;

    hex_digits = "0123456789abcdef";
    count = 0;
    if(n >= 16)
    {
        count += ft_putnbr_hex(n / 16);
    }
    count += ft_putchar(hex_digits[n % 16]);
    return (count);
}