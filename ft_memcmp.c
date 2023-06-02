/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 13:59:20 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/02 14:11:10 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char   *str1;
    const unsigned char   *str2;
    
    str1 = (const unsigned char *)s1;
    str2 = (const unsigned char *)s2;
    size_t  i;

    i = 0;
    while (i < n)
    {
        if (str1[i] == str2[i])
            i++;
        else
            return (str1[i] - str2[i]);
    }
    return (0);
}