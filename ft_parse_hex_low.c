/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex_low.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:05:04 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:03:07 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_hex_low(va_list args)
{
	unsigned int	number;

	number = (unsigned int)va_arg(args, int);
	ft_to_hex(number, FT_HEX_BASE_LOW, 1);
}
