/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:03:02 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/24 16:06:12 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	k;
	int	temp;

	i = 0;
	while (i < size)
	{
		k = i + 1;
		while (k < size)
		{
			if (tab[k] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[k];
				tab[k] = temp;
				k++;
			}
		}
		i++;
	}
}
