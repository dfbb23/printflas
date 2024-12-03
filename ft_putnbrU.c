/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrU.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:07:25 by abmoudni          #+#    #+#             */
/*   Updated: 2024/12/01 05:25:56 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


int	ft_putnbru(unsigned int nb)
{
	int  n;

	if (nb <= 9 )
	n = ft_putchar(nb + '0');
	else
	{
		n = ft_putnbru(nb / 10);
		n += ft_putnbru(nb % 10);
	}
	return (n);
}
