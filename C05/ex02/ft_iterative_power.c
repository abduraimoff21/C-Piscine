/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:41:19 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/28 07:24:40 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	answer;

	i = 0;
	answer = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		while (i < power)
		{
			answer *= nb;
			i++;
		}
		return (answer);
	}
}
/*
int main()
{

	printf("%d", ft_iterative_power(2,4));

}
*/
