/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 07:18:50 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/27 14:10:41 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_sel(int nb)
{
	if (nb < 0)
	{
		if (nb == -2147483648)
		{	
			write(1, "-2147483648", 11);
			nb = 0;
		}
		else
		{	
			ft_putchar('-');
			nb = nb * -1;
		}
	}
	if (nb != 0)
	{
		ft_sel(nb / 10);
		ft_putchar(nb % 10 + '0');
	}
}

void	ft_putnbr(int nb)
{
	if (nb == 0)
		ft_putchar('0');
	else
		ft_sel(nb);
}
