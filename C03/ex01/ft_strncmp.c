/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:53:21 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 23:54:17 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	index;

	index = 0;
	while ((index < n) && (s1[index] != '\0' || s2[index] != '\0'))
	{
		if (s1[index] < s2[index])
			return (-1);
		if (s1[index] > s2[index])
			return (1);
		index++;
	}
	return (0);
}
/*
int main(void)
{
 	char *s1;
 	char *s2;
 	s1 = "zkk";
 	s2 = "Meekk";
 	unsigned int n = 1;
 	printf("%d\n", strncmp(s1, s2, n));
 	int result = ft_strncmp(s1, s2, n);
 	printf("%d", result);
}
*/
