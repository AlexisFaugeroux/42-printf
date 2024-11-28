/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:34:34 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/28 12:42:38 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_parse_char(va_list args)
{
	ft_putchar_fd(va_arg(args, int), 1);
	ft_count(1, 0);
}
