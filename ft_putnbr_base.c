/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgoudman <tgoudman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:11:11 by tgoudman          #+#    #+#             */
/*   Updated: 2024/10/28 18:04:58 by tgoudman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(int nb, char *str)
{
	int	len;

	len = 1;
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		write(1, "-", 1);
		len ++;
	}
	if (nb >= 16)
		len += ft_putnbr_base(nb / 16, str);
	write(1, &str[nb % 16], 1);
	return (len);
}
