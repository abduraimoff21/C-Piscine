/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:42:56 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/28 07:25:57 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_fibonacci(int index)
{
	if (index > 1)
	{
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}	
	else if (index == 2)
	{
		return (1);
	}
	else if (index == 1)
	{
		return (1);
	}
	else if (index == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
/*
int main()
{
	printf("%d", ft_fibonacci(9));

}
*/
