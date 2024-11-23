/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 15:07:48 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 14:33:03 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include "libft/libft.h"

typedef struct s_printf
{
	char	conv_type;
	char	sign;
	size_t	size;
}	t_printf;

void	ft_write(va_list args, char const *s);
void	ft_parse(va_list args, char c);
void	ft_parse_char(va_list args);
void	ft_parse_str(va_list args);
void	ft_parse_void(va_list args);
void	ft_parse_int(va_list args);
void	ft_parse_udec(va_list args);
void	ft_parse_hex_low(va_list args);
void	ft_parse_hex_up(va_list args);

#endif
