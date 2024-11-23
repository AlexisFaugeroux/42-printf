/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:53:02 by afaugero          #+#    #+#             */
/*   Updated: 2024/11/23 17:06:55 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		n;

	va_start(args, s);
	ft_write(args, s);
	va_end(args);
	n = 1;
	// TO CHANGE, RETURNS THE NUMBER OF CHARS PRINTED
	return (n);
}

int	main(void)
{
	char const	str[] = "Hello";

	ft_printf("%dPLA%%NTEY\n%c\n%s\n%p\n%i\n%u\n%x\n%x\n", -723, 'z', "Hello", str, 723, -723, 723, -100000);
	printf("----------------\n");
	printf("%dPLA%%NTEY\n%c\n%s\n%p\n%i\n%u\n%x\n%x\n", -723, 'z', "Hello", str, 723, -723, 723, -100000);
}
/* printf("%.5dPLANTEY\n%c\n%s", 723, 'z', "Hello"); */
