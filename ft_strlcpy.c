/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 11:43:10 by mariosan          #+#    #+#             */
/*   Updated: 2023/05/31 12:16:56 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t  ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t src_len = 0;
    while (src[src_len] != '\0') {
        src_len++;
    }
    
    size_t dst_len = 0;
    while (dst_len < dstsize - 1 && src[dst_len]) 
    {
        dst[dst_len] = src[dst_len];
        dst_len++;
    }
    
    if (dstsize > 0) 
    {
        dst[dst_len] = '\0';
    }
    
    return src_len;
}
