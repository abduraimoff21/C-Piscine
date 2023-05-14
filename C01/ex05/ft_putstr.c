/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:46:24 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/24 15:53:58 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
 int	main(void)
 {
 	char	i;
 	char	j;
 	char	*k;
 	char	*l;

 	k = "Hello";
 	j = '2';
 	 k = &i;
 	 l = &j;

 	ft_putstr(k);

 	return (0);
}
*/
