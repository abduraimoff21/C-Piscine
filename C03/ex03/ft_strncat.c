/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 23:56:53 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 23:57:28 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	index;
	unsigned int	dest_len;

	index = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (index < nb && src[index] != '\0')
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
 	int nb;
 	ft_strncat(s2, s1, nb);
 	printf("%s", s2);
}
*/
