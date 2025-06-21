/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstring.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:42:33 by tgoudman          #+#    #+#             */
/*   Updated: 2024/10/28 17:39:28 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstring(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		write(1, "(null)", 6);
	else
		while (str[i] != '\0')
			write(1, &str[i++], 1);
	return (i);
}
