/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 19:32:25 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/02 15:10:17 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void    *memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;
    
    if (d == s)
        return (dst);
    if (d < s)
    {
        while (len > 0)
        {
            d = s;
            d++;
            s++;
            len--;
        }
    }
    else if (d < s)
    {
        while (len > 0)
        {
            
        }
    }
}