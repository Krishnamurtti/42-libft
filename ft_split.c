/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariosan <mariosan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 12:16:03 by mariosan          #+#    #+#             */
/*   Updated: 2023/06/08 13:28:22 by mariosan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    **ft_split(char const *s, char c)
{

int count;
int i;

while(s[i])
{
    if (s[i] != c)
    {
        count++;
        while(s[i] != c && s[i])
            i++;
    }    
    else
        i++;
}

char **result = (char **)malloc((count + 1)*sizeof(char));
if (!result)
    return (NULL);


}
