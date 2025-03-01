/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:12:50 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/16 18:33:51 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(char const *s, int c)
{
	int		i;
	char	search;
	char	*ptr;

	search = (char)c;
	ptr = (char *)s;
	i = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) == search)
			return (ptr + i);
		i++;
	}
	if (search == '\0')
		return (ptr + i);
	return (NULL);
}
