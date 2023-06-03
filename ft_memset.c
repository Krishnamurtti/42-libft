/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:32:20 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/02 16:07:35 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *memset(void *b, int c, size_t len) 
{
    unsigned char *p; 
    
    p = b;
    size_t i;
    
    i = 0;
    while (i < len) 
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return b;
}




void *memset(void *s, int c, size_t n) {
    unsigned char *p = s;
    unsigned char value = (unsigned char)c;
    
    while (n > 0) {
        *p++ = value;
        n--;
    }
    
    return s;
}
