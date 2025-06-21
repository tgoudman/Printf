/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:29:29 by tgoudman          #+#    #+#             */
/*   Updated: 2024/10/28 15:27:40 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

# define BASE_LOWER "0123456789abcdef"
# define BASE_UPPER "0123456789ABCDEF"

int	ft_putchar(char c);
int	ft_putstring(char *str);
int	ft_putnbr(int n);
int	ft_putnbr_base(int nb, char *str);
int	ft_putnbr_unsigned(unsigned int n);
int	ft_printf(const char *str, ...);

#endif