/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 18:16:55 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/01 18:41:37 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *p1;
    unsigned char   *p2;

    p1 = s1;
    p2 = s2;

    size_t  i;

    i = 0;
    while (i < n && (p1[i] || p2[i]))
    {
        if (p1[i] == p2[i])
            i++;
        else
            return (p1[i] - p2[i]);
    }
    return (0);
}