/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 20:54:44 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/21 21:09:34 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
#include <stdio.h>

int main(void)
{
	int		a;
	int		b;
	int		*ptra;
	int 	*ptrb;

	a = 1;
	b = 2;

	ptra = &a;
	ptrb = &b;

	ft_swap(ptra, ptrb);

	printf("a = %d, b = %d\n", a, b);
}
*/
