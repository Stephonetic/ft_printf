/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shannema <shannema@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 15:08:09 by shannema          #+#    #+#             */
/*   Updated: 2026/02/22 03:05:20 by shannema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>

// # ifdef __APPLE__
// #  define PTRNULL "0x0"
// # elif defined(__linux__)
// #  define PTRNULL "(nil)"
// # else
// #  define PTRNULL "(nil)"
// # endif

int				ft_printf(const char *format, ...);
int				ft_putchar(char c);
int				ft_putstr(char *s);
int				ft_putnbr(int n);
unsigned int	ft_putnbr_unsigned(unsigned int n);
int				ft_puthex(unsigned long n, char format);
int				ft_putptr(void *ptr);
size_t			ft_strlen(const char *s);

#endif