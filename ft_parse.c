/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:49:46 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/14 19:57:02 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_parse(va_list args, char c)
{
	if (c == 'c')
		return (ft_parse_char(va_arg(args, int)));
	else if (c == 's')
		return (ft_parse_str(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_parse_void(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_parse_int(va_arg(args, int)));
	else if (c == 'u')
		return (ft_parse_udec(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_parse_hex((unsigned int)va_arg(args, int), c));
	return (-1);
}
