/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:49:46 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 14:41:30 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_parse(va_list args, char c)
{
	if (c == 'c')
		ft_parse_char(args);
	else if (c == 's')
		ft_parse_str(args);
	else if (c == 'p')
		ft_parse_void(args);
	else if (c == 'd' || c == 'i')
		ft_parse_int(args);
	else if (c == 'u')
		ft_parse_udec(args);
	else if (c == 'x')
		ft_parse_hex_low(args);
	/* else if (c == 'X')
		ft_parse_hex_up(args); */
}
