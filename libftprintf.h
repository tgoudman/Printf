/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:29:29 by tgoudman          #+#    #+#             */
/*   Updated: 2024/10/26 13:19:21 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

#define BASE_LOWER "0123456789abcdef"
#define BASE_UPPER "0123456789ABCDEF"

void	ft_putchar(char c);
void	ft_putstring(char *str);
void	ft_putnbr(int n);
void	ft_putnbr_base(int nb, char *str);

#endif