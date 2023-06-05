/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 18:32:20 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/05 15:23:26 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void *memset(void *b, int c, size_t len) 
{
    unsigned char *p; 
    
    p = b;
    while (len > 0) 
    {
        *p++ = (unsigned char)c;
        len--;
    }
    return b;
}

