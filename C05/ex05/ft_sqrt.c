/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:44:03 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/28 07:31:11 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	a;

	a = 0;
	while (a * a <= nb && a < 46341)
	{
		if (a * a == nb)
			return (a);
		a++;
	}
	return (0);
}

 int main()
 {
 	printf("%d", 	ft_sqrt(1000));
 }
