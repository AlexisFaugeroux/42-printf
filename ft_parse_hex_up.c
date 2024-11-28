/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_hex_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 17:04:44 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:03:18 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_hex_up(va_list args)
{
	unsigned int	number;

	number = (unsigned int)va_arg(args, int);
	ft_to_hex(number, FT_HEX_BASE_UP, 1);
}
