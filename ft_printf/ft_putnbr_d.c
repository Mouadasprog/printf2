/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_d.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:19:35 by mouad             #+#    #+#             */
/*   Updated: 2024/11/17 22:40:46 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_d(int n)
{
    int count;

    count = 0;
    if(n == -2147483648)
    {
        count += ft_putchar('-');
        count += ft_putchar('2');
        n = 147483648;
    }

    if(n < 0)
    {
        count += ft_putchar('-');
        n = -n;
    }

    if(n >= 10)
    {
        count += ft_putnbr_d(n / 10);
    }

    count += ft_putchar(n % 10 + '0');
    return count;
}