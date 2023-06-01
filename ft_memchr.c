/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:29:38 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/01 19:09:54 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stddef.h>

void    *memchr(const void *s, int c, size_t n)
{
    unsigned char   *p;
    size_t  i;
    unsigned char   ch;

    p = s;
    ch = (unsigned char)c;
    i = 0;
    
    while (i < n && p[i])
    {
        if (p[i] == ch)
            return ((void *)p[i]);
        i++;
    }
    return (NULL)
}
