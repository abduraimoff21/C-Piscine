/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 15:49:42 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/24 15:56:27 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
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
 	printf("%d", ft_putstr(k));
 	return (0);
}
 */
