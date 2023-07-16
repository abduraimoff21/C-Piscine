/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 00:11:17 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/26 00:13:05 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	dest_len;

	index = 0;
	dest_len = ft_strlen(dest);
	if (size <= dest_len)
		return (size + ft_strlen(src));
	while (((dest_len + 1) < size) && src[index] != '\0')
	{
		dest[dest_len] = src[index];
		index++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest_len + ft_strlen(&src[index]));
}

int main(void)
{
 	char s2[30] = "m";
 	char s3[30] = "m";
 	char* s1 = "fkkkkYY";
 	int a = 8;
 	printf("c  : (%lu) $%s$\n", strlcat(s3, s1, a), s3);
    printf("ft : (%d) $%s$\n", ft_strlcat(s2, s1, a), s2);
}
