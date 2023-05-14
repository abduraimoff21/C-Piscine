/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dabdurai <dabdurai@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 04:36:33 by dabdurai          #+#    #+#             */
/*   Updated: 2022/09/25 04:37:59 by dabdurai         ###   ########.fr       */
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

int	number(char letter)
{
	return (letter >= '0' && letter <= '9');
}

int	letter(char letter)
{
	return (capital_letter(letter) || small_letter(letter));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (small_letter(str[i]))
		str[i] = str[i] - 32;
	while (str[i] != '\0')
	{
		i++;
		j = i - 1;
		if ((small_letter(str[i])) && !(letter(str[j])))
			str[i] = str[i] - 32;
		if ((letter(str[j]) || number(str[j])) && capital_letter(str[i]))
			str[i] = str[i] + 32;
	}
	return (str);
}
/*
int main()
{
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s\n%s",ft_strcapitalize(str),"Salut, Comment Tu Vas ?
	42mots Quarante-Deux; Cinquante+Et+Un");
}
*/
