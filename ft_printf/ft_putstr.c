/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mouad <mouad@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 21:53:04 by mouad             #+#    #+#             */
/*   Updated: 2024/11/18 00:06:04 by mouad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int    ft_putstr(char  *str)
{
    int count;
    count = 0;
    while(str[count])
    {
        ft_putchar(str[count]);
        count++;
    }
    return  (count);
}