/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:11:11 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:26:50 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dest[count] = src[count];
		count++;
	}
	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}
	return (dest);
}

/*
int main()
{
	// char *dest;
	// char *src;
	int n;

	char dest[22];
	char src[] = "abcdds";
	n=5;
	ft_strncpy(dest, src, n);
	printf("%s",dest);
	return (0);
}
*/
