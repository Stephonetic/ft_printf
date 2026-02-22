/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 00:41:39 by shannema          #+#    #+#             */
/*   Updated: 2026/02/22 02:08:09 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

unsigned int	ft_putnbr_unsigned(unsigned int n)
{
	char			c;
	unsigned int	num;
	unsigned int	counter;

	counter = 1;

	num = n;
	if (num >= 10)
	{
		counter += ft_putnbr_unsigned(num / 10);
	}
	c = '0' + (num % 10);
	write(1, &c, 1);
	return (counter);
}
