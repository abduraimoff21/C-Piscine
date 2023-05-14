/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:49:20 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/26 23:56:18 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while ((s1[index] == s2[index]) && (s1[index] != '\0')
		&& (s2[index] != '\0'))
	{
		index++;
	}
	return (s1[index] - s2[index]);
}
/*
int main(void)
{
 	char    s1[] = "b";
 	char    s2[] = "a";
 	printf("%d", ft_strcmp(s1, s2));
}
*/
