/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/13 22:40:01 by shannema          #+#    #+#             */
/*   Updated: 2026/02/10 23:38:06 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int n)
{
	char			c;
	unsigned int	num;
	int				counter;

	counter = 1;
	if (n < 0)
	{
		write(1, "-", 1);
		num = (unsigned int)(-n);
	}
	else
		num = (unsigned int)n;
	if (num >= 10)
	{
		counter += ft_putnbr(num / 10);
	}
	c = '0' + (num % 10);
	write(1, &c, 1);
	return (counter);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	output;

// 	output = ft_putnbr(3);
// 	printf("%d\n", output);
// 	output = ft_putnbr(85);
// 	printf("%d\n", output);
// 	output = ft_putnbr(5000);
// 	printf("%d\n", output);
// 	return (0);
// }
