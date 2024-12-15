/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:10:18 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/15 19:02:13 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_write(va_list args, char const *s, int *count)
{
	unsigned int	i;

	i = 0;
	while (*(s + i))
	{
		if (*(s + i) != '%')
		{
			ft_putchar_fd(*(s + i), 1);
			(*count)++;
			i++;
		}
		else if (*(s + i) == '%' && *(s + i + 1) == '%')
		{
			ft_putchar_fd(*(s + i), 1);
			(*count)++;
			i += 2;
		}
		else
		{
			*count += ft_parse(args, *(s + i + 1));
			i += 2;
		}
	}
}
