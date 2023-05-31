/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:44:41 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/27 14:45:21 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

int	ft_is_prime(int nb)
{
	int	a;

	a = 2;
	while (a < nb)
	{
		if (nb % a == 0)
			return (0);
		a++;
	}
	if (nb == 1 || nb == 0 || nb < 0)
	{
		return (0);
	}
	return (1);
}

int	main(void)
{
	int nb;

	nb = 2147483646;
	printf("%i\n", ft_is_prime(nb));
	return (0);
}
