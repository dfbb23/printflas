/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:06:38 by abmoudni          #+#    #+#             */
/*   Updated: 2024/12/01 05:08:31 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putexa(unsigned int n)
{
	int			con;
	const char	*s1 = "0123456789abcdef";

	con = 0;
	if (n < 16)
	{
		con = ft_putchar(s1[n]);
	}
	else
	{
		con = ft_putexa(n / 16);
		con += ft_putexa(n % 16);
	}
	return (con);
}
