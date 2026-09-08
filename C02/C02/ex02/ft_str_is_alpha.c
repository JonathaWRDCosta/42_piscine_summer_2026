/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonatha <jonatha@student.42porto.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/06 14:14:30 by jonatha           #+#    #+#             */
/*   Updated: 2026/09/07 01:29:42 by jonatha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (*str >= 65 && *str <= 90)
			str++;
		else if (*str >= 97 && *str <= 122)
			str++;
		else
			return (0);
	}
	return (1);
}

/*
int	main(void)
{
    printf("%d\n", ft_str_is_alpha("Abc"));
    printf("%d\n", ft_str_is_alpha("Ab1"));
    printf("%d\n", ft_str_is_alpha("123"));
    printf("%d\n", ft_str_is_alpha(""));
    printf("%d\n", ft_str_is_alpha(" "));
}
*/