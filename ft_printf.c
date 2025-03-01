/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afaugero <afaugero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 16:53:02 by afaugero          #+#    #+#             */
/*   Updated: 2024/12/20 14:02:32 by afaugero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	if (s == NULL || (*s == '%' && !*(s + 1)))
		return (-1);
	va_start(args, s);
	count = 0;
	ft_write(args, s, &count);
	va_end(args);
	return (count);
}

/* int	main(void)
{
	int		i;
	char	*str;
	void	*ptr;
	int		j;

	i = -2147483648;
	printf("int min :\n");
	printf("<-ft : %d\n", ft_printf("%d", i));
	printf("<-OG : %d\n", printf("%d", i));
	str = NULL;
	printf("str NULL :\n");
	printf("<-ft : %d\n", ft_printf("%s", str));
	printf("<-OG : %d\n", printf("%s", str));
	ptr = NULL;
	printf("ptr NULL :\n");
	printf("<-ft : %d\n", ft_printf("%p", str));
	printf("<-OG : %d\n", printf("%p", str));
	printf("guillemets :\n");
	printf("<-ft : %d\n", ft_printf(""));
	printf("<-OG : %d\n", printf(""));
	printf("ft_printf(0) :\n");
	printf("<-ft : %d\n", ft_printf(0));
	printf("<-OG : %d\n", printf(0));
	printf("pourcent :\n");
	printf("<-ft : %d\n", ft_printf("%%"));
	printf("<-OG : %d\n", printf("%%"));
	str = "les loulous";
	ptr = str;
	printf("differents flags au milieu d'un phrase :\n");
	printf("<-ft : %d\n",
		ft_printf("%p Salut %s l'int %% min vaut %d au revoir %s", ptr, str, i, str));
	printf("<-OG : %d\n",
		printf("%p Salut %s l'int %% min vaut %d au revoir %s", ptr, str, i, str));
	i = 42;
	printf("print X :\n");
	printf("<-ft : %d\n", ft_printf("%X", i));
	printf("<-OG : %d\n", printf("%X", i));
	printf("print x :\n");
	printf("<-ft : %d\n", ft_printf("%x", i));
	printf("<-OG : %d\n", printf("%x", i));
	j = -2147483648;
	printf("print u :\n");
	printf("<-ft : %d\n", ft_printf("%u", j));
	printf("<-OG : %d\n", printf("%u", j));
} */
