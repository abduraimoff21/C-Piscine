/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:16:41 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:34:06 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z'))
		{
			i++;
			continue ;
		}
		else
		{
			flag = 1;
			break ;
		}
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}
/*
int main()
{
	char *str = "AAAZ";
	printf("%d",ft_str_is_uppercase(str));
	return (0);
}
*/
