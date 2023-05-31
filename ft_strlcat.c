/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 12:18:00 by mariosan          #+#    #+#             */
/*   Updated: 2023/05/31 12:49:35 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

size_t  strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
    size_t  srclen;
    size_t  i;          // Contador para recorrer
    srclen = ft_strlen(src);

    while (src[i] && i < dstsize - 1)
    {
        dst[i + srclen] = src[i];
        i++;
    }
    if (dstsize > 0)
    {
        dst[i + srclen] = '\0';
    }
    return (i);
}