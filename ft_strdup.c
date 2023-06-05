/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:40:16 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/05 15:53:03 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char    *strdup(const char *s1)
{
    const char *s2;
    size_t  len;

    len = ft_strlen(s1);
    char *ptr = malloc((len + 1)*sizeof(char));

    if (ptr != NULL)
        while(*s1)
        {
            *s2++ = *s1++;
        }
    return (ptr);
}