/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:32:25 by mariosan          #+#    #+#             */
/*   Updated: 2023/05/28 19:49:11 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = dst;
    s = src;
    if (dst < src)
    {

    
        while (len > 0)
        {
            dst = src;
            dst++;
            src++;
            len--;
        }
    }
    else if (dst < src)
    {
        while (len > 0)
        {
            
        }
    }
}