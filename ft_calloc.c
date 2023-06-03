/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:44:43 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/03 20:09:14 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *calloc(size_t count, size_t size)
{
    size_t  total;
    size_t  i;

    total = count * size;
    void *ptr = malloc(total);
    i = 0;
    while(ptr)
    {
        ptr + i = 0;
    }
    free(ptr);

    return (ptr);
}