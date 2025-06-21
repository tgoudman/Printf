/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:27:49 by tgoudman          #+#    #+#             */
/*   Updated: 2024/10/28 17:57:16 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		count;
	int		*tmp;

	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				count += ft_putchar((char) va_arg(args, int));
			if (str[i] == 's')
				count += ft_putstring((char *) va_arg(args, char *));
			if (str[i] == 'p')
			{
				tmp = va_arg(args, void *);
				if (tmp == NULL)
					write(1, "(nil)", 5);
				else
				{
					write(1, "0x", 2);
					count += ft_putnbr_base((unsigned long long)tmp, BASE_LOWER);
				}
			}
			if (str[i] == 'd' || str[i] == 'i')
				count += ft_putnbr((int) va_arg(args, int));
			if (str[i] == 'u')
				count += ft_putnbr_unsigned((unsigned) va_arg(args, unsigned));
			if (str[i] == 'x')
				count += ft_putnbr_base((int) va_arg(args, int), BASE_LOWER);
			if (str[i] == 'X')
				count += ft_putnbr_base((int) va_arg(args, int), BASE_UPPER);
			if (str[i] == '%')
				count += write(1, "%", 1);
			++i;
		}
		else
			count += ft_putchar(str[i++]);
	}
	return (count);
}

int	main(void)
{
	char	*str = "dsd";
	char	c = 'a';
	int		nb = -551;
	unsigned int	nbu = 1544;
	int		count = 0;
	int		count2 = 0;

	ft_printf("%s" , "\n\nMY FUNCTION\n\n");
	ft_printf("caracter : %c\n" , c);
	ft_printf("pourcent : %%\n");
	ft_printf("string : %s\n" , str);
	ft_printf("number : %d\n", nb);
	ft_printf("pointer : %p\n", str);
	ft_printf("Base hexadecimal : %x\n", nb);
	ft_printf("Base hexadecimal : %X\n", nb);
	count2 = ft_printf("unsigned number : %u\n" ,nbu);
	ft_printf("%d\n\n", count2);

	printf("%s" , "TRUE FUNCTION\n\n");
	printf("caracter : %c\n" , c);
	printf("pourcent : %%\n");
	printf("string : %s\n" , str);
	printf("number : %d\n", nb);
	printf("pointer : %p\n", str);
	printf("Base hexadecimal : %x\n", nb);
	printf("Base hexadecimal : %X\n", nb);
	count = printf("unsigned number : %u\n" ,nbu);
	printf("%d", count);
	return (0);
}