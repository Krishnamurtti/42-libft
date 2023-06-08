/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:12:21 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/08 12:10:37 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

char    *strnstr(const char *haystack, const char *needle)
{
    size_t  i;
    size_t  j;
    size_t  nlen;

    nlen = ft_strlen(needle);
    if (nlen == 0)
        return ((char *))haystack;
    i = 0;
    j = 0;
    while (haystack[i])
    {
        if (haystack[i] == needle[j])
        {
            while (haystack[i+j] == needle[j] && haystack[i+j] && needle[j])
            {
                j++;
                if (nlen == j)
                    return ((char *)(haystack + i));
            }
        }
        i++;
    }
    return (NULL);
}




