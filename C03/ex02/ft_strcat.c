/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:55:15 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 23:55:51 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	int	dest_len;

	index = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}
/*
int main(void)
{
 	char *s1;
 	char src[30] = " mera kd";
 	char* s2;
 	s1 = "mera kdal";
 	s2 =src;
 	ft_strcat(s2, s1);
	printf("%s", s2);
}
*/
