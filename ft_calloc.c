/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 15:44:43 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/05 15:14:05 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void    *calloc(size_t count, size_t size)
{
    size_t  total;
    size_t  i;

    total = count * size;
    if (count == 0 || size == 0)
        return (NULL);
    
    void *ptr = malloc(total);
    
    if (ptr != NULL)
        memset(ptr, 0, total);
    return (ptr);
}