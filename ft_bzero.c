/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:02:25 by mariosan          #+#    #+#             */
/*   Updated: 2023/05/28 19:49:03 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void    bzero(void *s, size_t n)
{
    unsigned char *p;
    size_t i;

    p = s;
    i = 0;
    if (n != 0)
    {
        while (i < n)
        {
            p[i] = 0; 
            i++;
        }
    }
    return (0);
}

// 0 = NULL //






void    bzero(void *s, size_t n) 
{
    unsigned char *p = s; // Convertir el puntero a unsigned char

    while (n > 0) 
    {
        *p = 0; // Establecer el byte en cero
        p++;    // Avanzar al siguiente byte
        n--;      // Decrementar el contador
    }
}
