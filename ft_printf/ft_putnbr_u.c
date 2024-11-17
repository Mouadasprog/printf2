/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 22:28:35 by mouad             #+#    #+#             */
/*   Updated: 2024/11/17 22:29:49 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int ft_putnbr_u(unsigned int    n)
{
    int count;

    count = 0;
    if(n >= 10)
    {
        count += ft_putnbr_u(n / 10);
    }
    count += ft_putchar(n % 10 + '0');
    return count;
}