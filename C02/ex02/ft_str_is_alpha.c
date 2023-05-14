/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:12:46 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:27:55 by dabdurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	small_letter(char letter)
{
	return (letter >= 'a' && letter <= 'z');
}

int	capital_letter(char letter)
{
	return (letter >= 'A' && letter <= 'Z');
}

int	letter(char letter)
{
	return (capital_letter(letter) || small_letter(letter));
}

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (letter(str[i]))
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
int	main()
{
	char *str = "aaaaaaa";
	int a=ft_str_is_alpha(str);
	printf("%d",a);
	return (0);
}
*/
