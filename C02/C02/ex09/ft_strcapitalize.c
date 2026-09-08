/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/07 20:30:12 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 23:29:12 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_uppercase(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c += 65 - 97;
}

void	ft_lowercase(char *c)
{
	if (*c >= 65 && *c <= 90)
		*c -= 65 - 97;
}

int	ft_is_alphanumeric(char *c)
{
	return ((*c >= 97 && *c <= 122) || (*c >= 65 && *c <= 90) || (*c >= 48
			&& *c <= 57));
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*start;

	flag = 0;
	start = str;
	while (*str)
	{
		if (flag && ft_is_alphanumeric(str))
			ft_lowercase(str);
		else if (!flag && ft_is_alphanumeric(str))
		{
			ft_uppercase(str);
			flag = 1;
		}
		else if (!ft_is_alphanumeric(str))
			flag = 0;
		str++;
	}
	return (start);
}

/*
int	main(void)
{
	char	string1[];
	char	string2[];

    string1[] = "Hi, how are you? 42words forty-two; fifty+and+one";
    string2[] = "This is a Test string!";
    printf("Testing with ft_strcapitalize:\n");
    printf("Original string 1: \"%s\"\n", string1);
    printf("Capitalized string 1: \"%s\"\n\n", ft_strcapitalize(string1));
    printf("Original string 2: \"%s\"\n", string2);
    printf("Capitalized string 2: \"%s\"\n", ft_strcapitalize(string2));
    return (0);
}
*/
