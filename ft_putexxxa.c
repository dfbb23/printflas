#include "ft_printf.h"

int	ft_putexxxa(unsigned int n)
{
	int			con;
	const char	*s1 = "0123456789ABCDEF";

	con = 0;
	if (n < 16)
	{
		con = ft_putchar(s1[n]);
	}
	else
	{
		con = ft_putexxxa(n / 16);
		con += ft_putexxxa(n % 16);
	}
	return (con);
}
